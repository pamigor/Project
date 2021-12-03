cmake_minimum_required(VERSION 3.19)
project(Project)

set(CMAKE_CXX_STANDARD 14)

set(BUILD_CPR_TESTS OFF)
set(CPR_BUILD_TESTS_SSL OFF)
set(CMAKE_USE_OPENSSL OFF)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

set(JSON_BuildTests OFF CACHE INTERNAL "")

set(Boost_INCLUDE_DIR "C:\\boost_1_77_0")
set(Boost_LIBRARY_DIR "C:\\boost_1_77_0\\stage\\lib")
find_package(Boost COMPONENTS REQUIRED)
include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

include(FetchContent)
FetchContent_Declare(cpr GIT_REPOSITORY https://github.com/libcpr/cpr.git GIT_TAG f4622efcb59d84071ae11404ae61bd821c1c344b) # the commit hash for 1.6.2
FetchContent_MakeAvailable(cpr)

add_subdirectory(nlohmann_json)

add_executable(Project project.cpp)

target_include_directories(Project PUBLIC Include)
target_link_libraries(Project PRIVATE cpr::cpr)
target_link_libraries(Project PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(Project ${Boost_LIBRARIES})

if (MINGW)
	target_link_libraries(Project ws2_32)
endif()