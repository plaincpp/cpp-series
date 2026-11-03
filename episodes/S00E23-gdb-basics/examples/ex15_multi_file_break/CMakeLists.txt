cmake_minimum_required(VERSION 3.20)
project(stats LANGUAGES CXX)

add_library(stats stats.cpp)
target_compile_features(stats PUBLIC cxx_std_23)
target_compile_options(stats PRIVATE -Wall -Wextra -Wpedantic)

add_executable(app main.cpp)
target_link_libraries(app PRIVATE stats)
target_compile_options(app PRIVATE -Wall -Wextra -Wpedantic)
