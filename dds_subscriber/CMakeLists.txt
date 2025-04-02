cmake_minimum_required(VERSION 3.10)
project(cyclonedds_discovery)

# 查找 Cyclone DDS 库
find_package(CycloneDDS REQUIRED)

add_library(dds_subscriber
    src/ddssubscriber.cpp)

target_include_directories(dds_subscriber
    PUBLIC include
    SYSTEM
    ${CMAKE_CURRENT_SOURCE_DIR}/include

    # ${CycloneDDS_INCLUDE_DIRS}
)

# 链接 Cyclone DDS 库
target_link_libraries(dds_subscriber
    PUBLIC
    CycloneDDS::ddsc
)

set_target_properties(dds_subscriber PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../program
    ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../program
)