// example: ex25_tolerance_compare
// purpose: Compare two double values with a tolerance, not with ==.
// expect: ok
// in-video: yes
#include <cmath>
#include <iostream>

int main() {
    double sum = 0.1 + 0.2;
    double tolerance = 1e-9;
    bool close = std::abs(sum - 0.3) < tolerance;
    std::cout << std::boolalpha << close << '\n';
}
