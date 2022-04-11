cmake_minimum_required(VERSION 3.0.0)
project(tasks VERSION 0.1.0)
set (CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_executable(digit-occurance src/digit-occurance.cpp)
add_executable(smallest-positive src/smallest-positive.cpp)
add_executable(intersection-set src/intersection-set.cpp)