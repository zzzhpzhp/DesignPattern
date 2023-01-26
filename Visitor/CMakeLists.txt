cmake_minimum_required(VERSION 3.19)
project(Visitor)

set(CMAKE_CXX_STANDARD 11)

add_executable(Visitor main.cpp component_visitor.cpp component_visitor.h visitor_interface.cpp visitor_interface.h component_interface.h component_a.cpp component_a.h component_b.cpp component_b.h)