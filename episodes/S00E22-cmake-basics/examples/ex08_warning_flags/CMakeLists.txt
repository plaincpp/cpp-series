cmake_minimum_required(VERSION 3.28)
project(scores LANGUAGES CXX)

add_executable(app main.cpp)
target_compile_features(app PRIVATE cxx_std_23)
set_target_properties(app PROPERTIES CXX_EXTENSIONS OFF)
target_compile_options(app PRIVATE -Wall -Wextra -Wpedantic)
