cmake_minimum_required(VERSION 3.10)
project(cyclonedds_discovery)

# # 设置 C++ 标准 set(CMAKE_C_STANDARD 99)   # 或更高（如 11、17）
# set(CMAKE_C_STANDARD_REQUIRED ON)

# 查找 Cyclone DDS 库
find_package(CycloneDDS REQUIRED)

# 如果自动查找失败，手动指定路径（根据你的安装位置调整） include_directories(/usr/local/include)
# link_directories(/usr/local/lib)
# include_directories(
# include/data_type
# include    
# /usr/local/include)

# 添加可执行文件
# add_executable(discover_topics main.cc sensor_imu_type.c Subcriber.cc)
add_library(dds_subscriber src/ddssubscriber.cpp)

target_include_directories(dds_subscriber
    PUBLIC include
    SYSTEM
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    /usr/local/include
)



# add_library()
# 链接 Cyclone DDS 库
target_link_libraries(dds_subscriber PUBLIC CycloneDDS::ddsc)

set_target_properties(dds_subscriber PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../program
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../program
)

# add_executable(pub pub.c sensor_imu_type.c src/data_type/chassis_data_type.c)

# # 链接 Cyclone DDS 库
# target_link_libraries(pub PRIVATE CycloneDDS::ddsc)
