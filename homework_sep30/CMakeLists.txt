# Minimum version for CMake
cmake_minimum_required(VERSION 3.10)

# Project name
project(homework-solutions)

# Add library
add_library(student_class STATIC student_class.cpp)
add_library(dynamic_array STATIC dynamic_array.cpp)

# Include directories (this allows other files to include student_class.h)
target_include_directories(student_class PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_include_directories(dynamic_array PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})