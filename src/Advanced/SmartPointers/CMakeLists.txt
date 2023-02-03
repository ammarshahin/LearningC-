cmake_minimum_required(VERSION 3.0.0)
message(STATUS "building the SmartPointers liberary")
add_library(SmartPointers unique_pointer.cpp SmartPointers.hpp)
