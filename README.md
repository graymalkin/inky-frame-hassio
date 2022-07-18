# Inky Frame Home Assistant
This project aims to build a configurable Inky Frame Home Assistant Integration,
with configuration via a YAML file on the Inky Frame's micro SD card.

## Configuration
...

## Build

Install the [Raspberry Pi Pico SDK](https://github.com/raspberrypi/pico-sdk) and configure your `PICO_SDK_PATH` environment variable.
Then you can build with `cmake -B build -S .; make -C build/`, the binary will be in `build/src/inky-plate-hassio.elf`