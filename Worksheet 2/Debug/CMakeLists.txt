cmake_minimum_required(VERSION 3.19)
project(Debug)

set(CMAKE_CXX_STANDARD 11)

add_executable(Debug main.c multiply.c debug.h biggest.c)
