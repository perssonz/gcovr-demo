cmake_minimum_required(VERSION 3.25)

# These flags are used if cmake is called with -DCMAKE_BUILD_TYPE=PROFILE
set(CMAKE_C_FLAGS_PROFILE "--coverage -g -O0")
set(CMAKE_CXX_FLAGS_PROFILE "--coverage -g -O0")

project(gcov-demo CXX)

add_library(${PROJECT_NAME} STATIC src/foonction.cc)

target_include_directories(${PROJECT_NAME} PUBLIC include)

include(CTest)
add_subdirectory(googletest)
add_subdirectory(test)