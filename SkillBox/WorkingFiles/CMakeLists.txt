cmake_minimum_required(VERSION 3.19)

set (MY_INC_DIR ${CMAKE_SOURCE_DIR}/Include)
add_executable(ram.cpp disk.cpp cpu.cpp kbd.cpp gpu.cpp
        MY_INC_DIR/disk.h
        MY_INC_DIR/cpu.h
        MY_INC_DIR/kbd.h
        MY_INC_DIR/gpu.h)

target_include_directories(Project PUBLIC MY_INC_DIR)