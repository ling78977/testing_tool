#include "ddssubscriber.hpp"

// 构造函数
DDSSubscriber::DDSSubscriber(int domain_id)
    : participant_(dds_create_participant(domain_id, nullptr, nullptr)) {
    if (participant_ < 0) {
        throw std::runtime_error("Create participant failed: " +
                                 std::string(dds_strretcode(-participant_)));
    }
}

// 析构函数
DDSSubscriber::~DDSSubscriber() {
    for (auto &item : listeners_) {
        dds_delete_listener(item.second);
    }

    for (auto &item : readers_) {
        dds_delete(item.second);
    }

    if (participant_ > 0) {
        dds_delete(participant_);
    }
}

// 运行消息循环
void DDSSubscriber::run() {
    while (true) {
        dds_sleepfor(DDS_MSECS(100));
    }
}

// 单次轮询
void DDSSubscriber::spin_once(dds_duration_t timeout) {
    dds_sleepfor(timeout);
}

// 检查DDS实体
void DDSSubscriber::check_entity(dds_entity_t entity, const char *operation) {
    if (entity < 0) {
        std::string msg =
            operation + std::string(" failed: ") + dds_strretcode(-entity);
        throw std::runtime_error(msg);
    }
}
