cmake_minimum_required(VERSION 3.5)

# Pull in PICO SDK (must be before project)
include(pico_sdk_import.cmake)

project(bager_lib C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

set(PICO_EXAMPLES_PATH $(PROJECT_SOURCE_DIR))

# Initialize the SDK
pico_sdk_init()

add_library(bager_lib STATIC src/main.c)

# Pull in our pico_stdlib which pulls in common libraries
# Pull in hardware_pwm for motor control
target_link_libraries(bager_lib pico_stdlib hardware_pwm)
