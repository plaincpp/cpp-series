// example: ex02_integer_division
// purpose: Compare integer division with floating-point division of the same values.
// expect: ok
// in-video: no
#include <iostream>

int main() {
    std::cout << 7 / 2 << '\n';
    std::cout << 7.0 / 2 << '\n';
    std::cout << 7 / 2.0 << '\n';
    std::cout << 7 / 2 * 2.0 << '\n';
}
