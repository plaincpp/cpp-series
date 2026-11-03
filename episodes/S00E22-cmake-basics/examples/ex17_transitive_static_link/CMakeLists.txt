cmake_minimum_required(VERSION 3.28)
project(textstats LANGUAGES CXX)

add_library(words STATIC words.cpp)
add_library(report STATIC report.cpp)
target_link_libraries(report PRIVATE words)

add_executable(app main.cpp)
target_link_libraries(app PRIVATE report)
