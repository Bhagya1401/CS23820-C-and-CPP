cmake_minimum_required(VERSION 3.8)
project(recursive)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES recursive.cpp Date.cpp Date.h)
add_executable(recursive ${SOURCE_FILES})