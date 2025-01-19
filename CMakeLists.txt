cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_library(untitled STATIC library.cpp
        OOP.h)
