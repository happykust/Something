cmake_minimum_required(VERSION 3.24)
project(Something)

set(CMAKE_CXX_STANDARD 14)

include_directories(Practice-2)

add_executable(Something
        Practice-2/Task-1.cpp Practice-2/Task-2.cpp)
