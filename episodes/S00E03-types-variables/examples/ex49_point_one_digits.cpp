// example: ex49_point_one_digits
// purpose: Print 0.1, 0.2 and their sum with 17 significant digits, so the small error of each double shows.
// expect: ok
#include <iomanip>
#include <iostream>

int main() {
    std::cout << std::setprecision(17);
    std::cout << 0.1 << '\n';
    std::cout << 0.2 << '\n';
    std::cout << 0.1 + 0.2 << '\n';
}
