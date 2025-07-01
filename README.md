# bager-lib
Static library containing all GPIO pin codes

# B.A.G.E.R.
B.A.G.E.R. (Basic Autonomous Ground Excavation Robot) is an autonomous excavator robot featuring a full project documentation parser.
Parser is written in Python, while B.A.G.E.R.'s movement is controlled using Raspberry Pi Pico programmed with C and C++.
We are keen to keep human operators to oversee computer's work.

## Compile instructions
- Install [Pico SDK](https://github.com/raspberrypi/pico-sdk) by cloning it.
- If needed copy `pico_sdk_import.cmake` from `external` folder into project's root directory.
- If needed export path Pico SDK (`export PICO_SDK_PATH=/path`).
- Make `build` directory and enter it.
- Run `cmake ..` and then `make` in order to get `libbager_lib.a` file which is a shared library.
