cmake_minimum_required(VERSION 3.28)
project(shapes LANGUAGES CXX)

add_library(geometry STATIC geometry.cpp)
add_executable(app main.cpp)
