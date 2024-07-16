# Minimum CMake version required
cmake_minimum_required(VERSION 3.1)

#Project name and version
project(VISITOR VERSION 1.0)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectories
add_subdirectory(${CMAKE_SOURCE_DIR}/cpp_impl)