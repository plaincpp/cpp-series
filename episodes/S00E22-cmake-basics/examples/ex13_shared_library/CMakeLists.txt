cmake_minimum_required(VERSION 3.28)
project(weather LANGUAGES CXX)

add_library(units SHARED units.cpp)
add_executable(app main.cpp)
target_link_libraries(app PRIVATE units)
