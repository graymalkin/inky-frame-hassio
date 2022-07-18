cmake_minimum_required(VERSION 3.12)

include($ENV{PICO_SDK_PATH}/pico_sdk_init.cmake)
pico_sdk_init()

project(inky-frame-hassio)

add_library(yaml-cpp STATIC "./third-party/yaml-cpp")
set_target_properties(yaml-cpp PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(yaml-cpp pico_stdlib)

add_subdirectory(./src)
