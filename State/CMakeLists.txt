cmake_minimum_required(VERSION 3.19)
project(State)

set(CMAKE_CXX_STANDARD 11)

add_executable(State main.cpp context.h state_interface.h context.cpp state_a.cpp state_a.h state_b.cpp state_b.h)