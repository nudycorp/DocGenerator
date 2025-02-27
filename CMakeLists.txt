cmake_minimum_required(VERSION 3.00.0)
project(untitled)

set(CMAKE_CXX_STANDARD 11)

add_executable(untitled main.cpp
        samira.h
        builder.h
        bulders/builderText.cpp)
