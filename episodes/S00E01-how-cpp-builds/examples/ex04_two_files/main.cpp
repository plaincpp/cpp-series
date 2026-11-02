// example: ex04_two_files
// purpose: Build one program from two source files that share a header.
// expect: ok
// in-video: yes
#include <iostream>
#include "util.h"

int main() {
    std::cout << add(2, 3) << '\n';
}
