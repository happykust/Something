cmake_minimum_required(VERSION 3.24)
project(Something)

set(CMAKE_CXX_STANDARD 14)

include_directories(Practice-6)

add_executable(Task-3 Sea/Sea.cpp Sea/Sea.h Ocean/Ocean.cpp Ocean/Ocean.h Bay/Bay.cpp Bay/Bay.h main.cpp)
