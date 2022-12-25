cmake_minimum_required(VERSION 3.19)
project(Interpreter)

set(CMAKE_CXX_STANDARD 11)

add_executable(Interpreter main.cpp expression_interface.h terminal_expression.cpp terminal_expression.h or_expression.cpp or_expression.h and_expression.cpp and_expression.h)