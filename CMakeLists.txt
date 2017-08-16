cmake_minimum_required(VERSION 3.8)
project(tutorial)

set(CMAKE_C_STANDARD 99)

include_directories( ${PA_ROOT_DIR}/include)

set(SOURCE_FILES main.c)
add_executable(tutorial ${SOURCE_FILES})

target_link_libraries (tutorial portaudio)