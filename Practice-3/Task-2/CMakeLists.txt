cmake_minimum_required(VERSION 3.24)
project(Something)

set(CMAKE_CXX_STANDARD 14)

include_directories(Task-2)

add_executable(Task-2 Rational.cpp Rational.h main.cpp)
