cmake_minimum_required(VERSION 3.8)
project(WorksheetFilesIO)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Book.cpp Book.h)
add_executable(WorksheetFilesIO ${SOURCE_FILES})