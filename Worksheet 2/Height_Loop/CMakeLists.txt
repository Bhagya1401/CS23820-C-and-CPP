cmake_minimum_required(VERSION 3.19)
project(Height)

set(CMAKE_CXX_STANDARD 11)

add_executable(Height cmake-build-debug/main.c cmake-build-debug/height.c cmake-build-debug/height.h)
