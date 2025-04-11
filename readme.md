```
git clone https://github.com/ling78977/testing_tool.git

cd test_tool

mkdir build && cd build

cmake ..

make -j$(nproc)
```
program里为二进制文件和所依赖的库文件以及bfbs文件，编译完成后把该文件夹拷贝到车端。

# DDSSubscriber类使用

## 1.创建对象 
```
DDSSubscriber subscriber;
```
## 2.订阅制定话题：
T为话题对应的消息类型
T_desc 为话题消息的描述结构体
在src/data_type下有定义
```
subscriber.create_subscriber<T>(
      "topic_name", &T_desc,
      [&](const T &data, const dds_sample_info_t &info) {
        ...
        回调函数业务逻辑
        ···
      });
```
## 3.运行
```
subscriber.run();
return 0；
```
