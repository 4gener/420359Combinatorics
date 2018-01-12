cmake_minimum_required(VERSION 3.9)
project(P5)

set(CMAKE_CXX_STANDARD 11)

if (WIN32)
    set(CMAKE_CXX_FLAGS -fexec-charset=gbk)
endif ()

add_executable(P5 main.cpp)