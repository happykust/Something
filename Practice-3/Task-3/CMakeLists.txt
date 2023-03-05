cmake_minimum_required(VERSION 3.24)
project(Something)

set(CMAKE_CXX_STANDARD 14)

include_directories(Task-3)

add_executable(Task-3 Rational.cpp Rational.h main.cpp)
