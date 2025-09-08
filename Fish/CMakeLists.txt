cmake_minimum_required(VERSION 4.0)
project(Fish C)

set(CMAKE_C_STANDARD 11)

add_executable(Fish main.c
        pool.h
        pools.h)
