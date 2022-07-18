add_executable(inky-plate-hassio main.cc)
target_link_libraries(inky-plate-hassio yaml-cpp pico_stdlib)
pico_add_extra_outputs(inky-plate-hassio)
