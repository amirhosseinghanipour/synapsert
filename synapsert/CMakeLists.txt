cmake_minimum_required(VERSION 3.10)
project(SynapseRT)

set(CMAKE_PREFIX_PATH "/usr/lib/")

find_package(Protobuf REQUIRED)

add_executable(synapsert main.cpp)

target_include_directories(synapsert PRIVATE ${Protobuf_INCLUDE_DIRS} ./generated)

target_link_libraries(
    synapsert
    ${Protobuf_LIBRARIES}
    /usr/lib/libabsl_log_internal_check_op.so
    /usr/lib/libabsl_strings.so
    /usr/lib/libabsl_base.so
    /usr/lib/libabsl_status.so
    /usr/lib/libabsl_time.so
    /usr/lib/libabsl_synchronization.so
    /usr/lib/libabsl_log_internal_message.so
)

target_sources(synapsert PRIVATE generated/ir.pb.cc)
include_directories(generated)
