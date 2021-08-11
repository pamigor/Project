cmake_minimum_required(VERSION 3.19)
project(Project)

set(CMAKE_CXX_STANDARD 14)


add_executable(Project
        project.cpp)

target_include_directories(Project PUBLIC Include)

