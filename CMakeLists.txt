cmake_minimum_required(VERSION 3.19)
project(Project)

set(CMAKE_CXX_STANDARD 14)
#set (MY_INC_DIR ${CMAKE_SOURCE_DIR}/Include)

#add_subdirectory(src)
add_executable(Project project.cpp)

target_include_directories(Project PUBLIC Include)


