cmake_minimum_required(VERSION 3.10)
project(stack C)

set(CMAKE_C_STANDARD 99)

add_executable(stack stack.c stack.h stack_test.c)
