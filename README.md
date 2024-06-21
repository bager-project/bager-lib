# bager-lib
Static library containing all GPIO pin codes

# B.A.G.E.R.
B.A.G.E.R. (Basic Autonomous Ground Excavation Robot) is an excavator featuring full project documentation parser. We are keen to keep human operators to oversee computers work. We are using Raspberry Pi Pico with C & C++ combination.

## Compile instructions
- Install [Pico SDK](https://github.com/raspberrypi/pico-sdk) by cloning it.
- If needed copy `pico_sdk_import.cmake` from `external` folder into project's root directory.
- If needed export path Pico SDK (`export PICO_SDK_PATH=/path`).
- Make `build` directory and enter it.
- Run `cmake ..` and then `make` in order to get `libbager_lib.a` file which is shared library.
