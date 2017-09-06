cmake_minimum_required(VERSION 3.8)
project(tutorial)

#include(CheckFunctionExists)
#
#CHECK_FUNCTION_EXISTS(pow RESULT)
#if(NOT RESULT)
#    unset(RESULT)
#    list(APPEND CMAKE_REQUIRED_LIBRARIES m)
#    CHECK_FUNCTION_EXISTS(pow RESULT)
#    if(RESULT)
#        target_link_libraries(yourtarget m)
#    else()
#        message(FATAL_ERROR "No pow() found")
#    endif()
#endif()

#set(CMAKE_C_STANDARD 99)
#list(APPEND CMAKE_REQUIRED_LIBRARIES m)

#include_directories( ${PA_ROOT_DIR}/include)

set(SOURCE_FILES midi_freq.c)
#add_executable(tutorial ${SOURCE_FILES} main.c)
add_executable(midifreq ${SOURCE_FILES} midi_freq.c)

target_link_libraries (midifreq -lm)
#target_link_libraries (tutorial portaudio )