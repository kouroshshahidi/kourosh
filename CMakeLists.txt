cmake_minimum_required(VERSION 3.26)
project(c C)

set(CMAKE_C_STANDARD 11)

add_library(c library.c
        main.c
        main2.c
        main3.cpp
)
