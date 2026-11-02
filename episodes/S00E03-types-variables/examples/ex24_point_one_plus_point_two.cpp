// example: ex24_point_one_plus_point_two
// purpose: Show that 0.1 + 0.2 is not equal to 0.3 for double, and print both values with 17 significant digits.
// expect: ok
// in-video: yes
#include <iomanip>
#include <iostream>

int main() {
    double sum = 0.1 + 0.2;
    std::cout << sum << '\n';
    std::cout << std::boolalpha << (sum == 0.3) << '\n';
    std::cout << std::setprecision(17) << sum << '\n';
    std::cout << 0.3 << '\n';
}
