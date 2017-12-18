cmake_minimum_required(VERSION 3.6)
project(IsotopVector)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp El.cpp El.h Is.cpp Is.h)
add_executable(IsotopVector ${SOURCE_FILES})