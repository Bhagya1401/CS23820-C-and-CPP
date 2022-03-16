cmake_minimum_required(VERSION 3.8)
project(employees)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Date.cpp
        Date.h
        Employee.cpp
        Employee.h
        main.cpp
        Pension.h
        Pension.cpp
        )

add_executable(employees ${SOURCE_FILES})