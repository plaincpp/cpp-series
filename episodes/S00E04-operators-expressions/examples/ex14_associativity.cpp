// example: ex14_associativity
// purpose: Show left-to-right grouping for * and %, and right-to-left grouping for =.
// expect: ok
#include <iostream>

int main() {
    int width = 0;
    int height = 0;
    width = height = 7;
    std::cout << width << ' ' << height << '\n';
    std::cout << 2 * 7 % 4 << '\n';
    std::cout << 2 * (7 % 4) << '\n';
    std::cout << -3 * -3 << '\n';
}
