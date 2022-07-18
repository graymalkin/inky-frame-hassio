# Inky Frame Home Assistant
This project aims to build a configurable Inky Frame Home Assistant Integration,
with configuration via a YAML file on the Inky Frame's micro SD card.

## Configuration
...

## Build

Pull all the submodules to get the Pico SDK and the Pimoroni libraries:

```git submodule update --init --recursive --depth=2```

Then you can build with `cmake -B build -S .; make -C build/`, the binary will be in `build/src/inky-plate-hassio.elf`
