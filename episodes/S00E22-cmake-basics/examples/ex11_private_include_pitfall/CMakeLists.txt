cmake_minimum_required(VERSION 3.28)
project(shapes LANGUAGES CXX)

add_library(geometry STATIC geometry.cpp)
target_include_directories(geometry PRIVATE include)

add_executable(app main.cpp)
target_link_libraries(app PRIVATE geometry)
