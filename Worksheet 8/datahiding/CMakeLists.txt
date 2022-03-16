cmake_minimum_required(VERSION 3.16)
project(datahiding)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(datahiding
        Bat.cpp
        Bat.h
        Dog.cpp
        Dog.h
        Elk.cpp
        Elk.h
        Mammal.cpp
        Mammal.h
        MammalCreator.cpp
        MammalCreator.h
        Polymorphism.cpp
        TestDeepCopy.cpp)
