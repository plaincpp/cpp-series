// example: ex32_literals_separators
// purpose: Show digit separators and the binary, hexadecimal, octal and exponent forms of literals.
// expect: ok
// in-video: no
#include <iostream>

int main() {
    long long population = 8'100'000'000;
    int mask = 0b1111'0000;
    int color = 0xFF;
    int mode = 010;
    double small = 1.5e-3;
    std::cout << population << '\n';
    std::cout << mask << ' ' << color << ' ' << mode << '\n';
    std::cout << small << '\n';
}
