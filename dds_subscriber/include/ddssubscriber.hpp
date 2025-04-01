#ifndef DDS_SUBSCRIBER_H
#define DDS_SUBSCRIBER_H

#include "dds/dds.h" // 假设你有这个头文件
#include <functional>
#include <iostream>
#include <memory>
#include <stdexcept>
#include <string>
#include <unordered_map>

#define MAX_SAMPLES 10
class DDSSubscriber {
public:
  explicit DDSSubscriber(int domain_id = DDS_DOMAIN_DEFAULT);
  ~DDSSubscriber();

  // 创建订阅者的模板方法
  template <typename T>
  void create_subscriber(
      const std::string &topic_name,
      const dds_topic_descriptor_t *dds_topic_desc,
      std::function<void(const T &, const dds_sample_info_t &)> callback) {

    // 创建主题
    dds_entity_t topic = dds_create_topic(participant_,
                                          dds_topic_desc, // 假设类型有描述符
                                          topic_name.c_str(), nullptr, nullptr);

    check_entity(topic, "Create topic");

    // 创建QoS
    dds_qos_t *qos = dds_create_qos();
    dds_qset_reliability(qos, DDS_RELIABILITY_RELIABLE, DDS_MSECS(10));

    // 创建Reader
    dds_entity_t reader = dds_create_reader(participant_, topic, qos, nullptr);
    check_entity(reader, "Create reader");
    dds_delete_qos(qos);

    // 保存reader
    readers_[topic_name] = reader;

    // 设置回调
    setup_callback<T>(topic_name, reader, callback);
  }

  // 运行消息循环
  void run();

  // 单次轮询
  void spin_once(dds_duration_t timeout = DDS_MSECS(100));

private:
  dds_entity_t participant_;
  std::unordered_map<std::string, dds_entity_t> readers_;
  std::unordered_map<std::string, dds_listener_t *> listeners_;

  // 泛型回调处理器
  template <typename T> struct CallbackHandler {
    // 静态回调函数
    static void data_available(dds_entity_t reader, void *arg) {
      auto *handler = static_cast<CallbackHandler<T> *>(arg);

      T samples[MAX_SAMPLES];
      void *sample_ptrs[MAX_SAMPLES];
      dds_sample_info_t infos[MAX_SAMPLES];

      // 设置样本指针数组
      for (int i = 0; i < MAX_SAMPLES; i++) {
        sample_ptrs[i] = &samples[i];
      }

      // 读取数据
      dds_return_t ret =
          dds_take(reader, sample_ptrs, infos, MAX_SAMPLES, MAX_SAMPLES);

      if (ret > 0) {
        // 处理有效数据
        for (int i = 0; i < ret; ++i) {
          if (infos[i].valid_data) {
            // 调用用户回调
            handler->callback(samples[i], infos[i]);
          }
        }
      }
    }

    std::function<void(const T &, const dds_sample_info_t &)> callback;
  };

  // 存储不同类型的回调处理器
  std::unordered_map<std::string, std::shared_ptr<void>> callback_handlers_;

  // 设置特定类型的回调
  template <typename T>
  void setup_callback(
      const std::string &topic_name, dds_entity_t reader,
      std::function<void(const T &, const dds_sample_info_t &)> callback) {

    // 创建回调处理器
    auto handler = std::make_shared<CallbackHandler<T>>();
    handler->callback = callback;

    // 保存处理器
    callback_handlers_[topic_name] = handler;

    // 创建监听器
    dds_listener_t *listener = dds_create_listener(handler.get());
    dds_lset_data_available(listener, &CallbackHandler<T>::data_available);

    // 绑定监听器到reader
    dds_set_listener(reader, listener);

    // 保存监听器
    listeners_[topic_name] = listener;
  }

  // 检查DDS实体
  void check_entity(dds_entity_t entity, const char *operation);
};

// #include "DDSSubscriber.tpp" // 包含模板实现文件

#endif // DDS_SUBSCRIBER_H
