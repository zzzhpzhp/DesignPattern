cmake_minimum_required(VERSION 3.19)
project(Observer)

set(CMAKE_CXX_STANDARD 11)

add_executable(Observer main.cpp observer_interface.h observer_a.cpp observer_a.h observer_b.cpp focus.cpp focus.h observer_b.h)