# Set the minimum version of CMake that can be used
# To find the cmake version run
# $ cmake --version
cmake_minimum_required(VERSION 3.5)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 14)

# Set the project name
project (LearningCpp)

# Add an executable
add_executable(app src/main.cpp)

# Add sub directories
add_subdirectory(src/tests)
add_subdirectory(src/Advanced/SmartPointers)
add_subdirectory(src/Advanced/Lambda)