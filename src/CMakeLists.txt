add_executable(inky-plate-hassio 
  # hw_config.c
  main.cc
)

add_library(yaml-cpp "../third-party/yaml-cpp")
include_directories("../third-party/yaml-cpp/include")
set_target_properties(yaml-cpp PROPERTIES LINKER_LANGUAGE CXX)
target_link_libraries(yaml-cpp pico_stdlib)

# add_subdirectory(../third-party/no-OS-FatFS-SD-SPI-RPi-Pico/FatFs_SPI build)

# include(${PIMORONI_PICO_PATH}/libraries/inky_frame/inky_frame.cmake)
# add_subdirectory(${PIMORONI_PICO_PATH}/libraries/inky_frame build)

target_link_libraries(inky-plate-hassio
  yaml-cpp
  inky_frame
  hardware_rtc
  pico_stdlib
)

pico_add_extra_outputs(inky-plate-hassio)
