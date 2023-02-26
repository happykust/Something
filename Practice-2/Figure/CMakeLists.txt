cmake_minimum_required(VERSION 3.24)
project(Something)

set(CMAKE_CXX_STANDARD 14)

include_directories(Practice-2)

add_executable(Figure Practice-2/Figure/Figure.cpp Practice-2/Figure/main.cpp Practice-2/Figure/Figure.h)
