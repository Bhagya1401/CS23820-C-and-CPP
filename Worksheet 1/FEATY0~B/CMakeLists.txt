cmake_minimum_required(VERSION 3.19)
project(CS23820 C)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(CS23820
        first.c
        functions.c
        functions.h)
