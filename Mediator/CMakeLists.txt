cmake_minimum_required(VERSION 3.19)
project(Mediator)

set(CMAKE_CXX_STANDARD 11)

add_executable(Mediator main.cpp mediator.h user_interface.h user_interface.cpp)