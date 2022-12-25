cmake_minimum_required(VERSION 3.19)
project(Command)

set(CMAKE_CXX_STANDARD 11)

add_executable(Command main.cpp  command_interface.h command_a.cpp command_a.h command_b.cpp command_b.h executor.cpp executor.h)