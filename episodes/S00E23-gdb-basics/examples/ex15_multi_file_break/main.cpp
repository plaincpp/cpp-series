// example: ex15_multi_file_break
// purpose: Set a breakpoint in a second source file of a CMake project with file:line.
// expect: ok
// flags: -g -O0
#include <iostream>
#include <vector>
#include "stats.h"

int main() {
    std::vector<int> values{70, 80, 90};
    std::cout << "mean: " << mean(values) << '\n';
}
