// example: ex37_point_one_short
// purpose: Show the 0.1 + 0.2 puzzle of ex24 with lines of 40 characters or fewer, for a vertical Short, and the sum with 17 digits.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    double sum = 0.1 + 0.2;
    std::cout << sum << '\n';
    std::cout << std::boolalpha;
    std::cout << (sum == 0.3) << '\n';
    std::cout.precision(17);
    std::cout << sum << '\n';
}
