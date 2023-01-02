cmake_minimum_required(VERSION 3.19)
project(ChainOfResponsibility)

set(CMAKE_CXX_STANDARD 11)

add_executable(ChainOfResponsibility main.cpp handle_interface.h handle_a.cpp handle_a.h handle_b.cpp handle_b.h handle_c.cpp handle_c.h)