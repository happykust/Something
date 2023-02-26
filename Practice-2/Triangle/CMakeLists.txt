cmake_minimum_required(VERSION 3.24)
project(Something)

set(CMAKE_CXX_STANDARD 14)

include_directories(Practice-2)

add_executable(Triangle Practice-2/Triangle/Triangle.cpp Practice-2/Triangle/Triangle.h Practice-2/Triangle/main.cpp)
