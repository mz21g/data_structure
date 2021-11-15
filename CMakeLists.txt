cmake_minimum_required(VERSION 3.19)
project(data_structure)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(data_structure
        link_list.cpp
        link_list.h)
