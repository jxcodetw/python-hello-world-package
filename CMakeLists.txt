cmake_minimum_required(VERSION 3.14)
project(hello_world_pybind11)

find_package(pybind11 REQUIRED)

add_subdirectory(src/cpp)
