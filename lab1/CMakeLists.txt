cmake_minimum_required(VERSION 3.7)
project(lab1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -g")

set(SOURCE_FILES main.cpp)
add_executable(lab1 ${SOURCE_FILES})