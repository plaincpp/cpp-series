// example: ex02_two_sources
// purpose: Build one executable from two source files and a header.
// expect: ok
#include "greet.h"
#include <iostream>

int main() {
    std::cout << greeting("CMake") << '\n';
}
