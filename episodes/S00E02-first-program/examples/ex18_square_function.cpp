// example: ex18_square_function
// purpose: Use a small function to compare -O0 and -O2 assembly in Compiler Explorer.
// expect: ok
// flags: -O2
// in-video: yes
#include <iostream>

int square(int number) {
    return number * number;
}

int main() {
    std::cout << square(7) << '\n';
}
