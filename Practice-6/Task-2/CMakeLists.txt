cmake_minimum_required(VERSION 3.24)
project(Something)

set(CMAKE_CXX_STANDARD 14)

include_directories(Practice-6)

add_executable(Task-2 TruncatedCone.cpp TruncatedCone.h Cone/Cone.cpp Cone/Cone.h main.cpp)
