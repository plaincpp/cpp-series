// example: ex08_fmod_remainder
// purpose: Use std::fmod to get the remainder of floating-point values.
// expect: ok
#include <cmath>
#include <iostream>

int main() {
    std::cout << std::fmod(7.5, 2.0) << '\n';
    std::cout << std::fmod(-7.5, 2.0) << '\n';
}
