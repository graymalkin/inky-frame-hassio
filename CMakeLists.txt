cmake_minimum_required(VERSION 3.12)

set(CMAKE_CXX_STANDARD 17)
set(PICO_SDK_PATH ${CMAKE_CURRENT_LIST_DIR}/third-party/pico-sdk)
set(PICO_EXTRAS_PATH ${CMAKE_CURRENT_LIST_DIR}/third-party/pico-extras)
set(PIMORONI_PICO_PATH ${CMAKE_CURRENT_LIST_DIR}/third-party/pimoroni-pico)

include(${PIMORONI_PICO_PATH}/pimoroni_pico_import.cmake)
include(${PICO_SDK_PATH}/pico_sdk_init.cmake)
include(${PICO_EXTRAS_PATH}/external/pico_extras_import.cmake)

set(PICO_BOARD "pico_w")
set(PICO_CXX_ENABLE_EXCEPTIONS 1)
pico_sdk_init()

include(common/pimoroni_i2c)
include(libraries/bitmap_fonts/bitmap_fonts)
include(libraries/hershey_fonts/hershey_fonts)
include(libraries/inky_frame/inky_frame)
include(libraries/jpegdec/jpegdec)
include(libraries/pico_graphics/pico_graphics)
include(drivers/fatfs/fatfs)
include(drivers/pcf85063a/pcf85063a)
include(drivers/sdcard/sdcard)
include(drivers/uc8159/uc8159)

project(inky-frame-hassio)

include_directories(./include)
add_subdirectory(./src)
