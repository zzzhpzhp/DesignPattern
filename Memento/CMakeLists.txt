cmake_minimum_required(VERSION 3.19)
project(Memento)

set(CMAKE_CXX_STANDARD 11)

add_executable(Memento main.cpp memento.cpp memento.h originator.cpp originator.h)