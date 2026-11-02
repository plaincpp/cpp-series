// example: ex26_relative_tolerance
// purpose: Show that a fixed tolerance fails for large values, and that a tolerance relative to the size works.
// expect: ok
#include <algorithm>
#include <cmath>
#include <iostream>

bool nearly_equal(double x, double y) {
    double scale = std::max(std::abs(x), std::abs(y));
    return std::abs(x - y) <= 1e-12 * scale;
}

int main() {
    double big = 0.1 * 3 * 1e17;
    double expected = 3e16;
    std::cout << std::boolalpha;
    std::cout << nearly_equal(0.1 + 0.2, 0.3) << '\n';
    std::cout << (std::abs(big - expected) < 1e-9) << '\n';
    std::cout << nearly_equal(big, expected) << '\n';
}
