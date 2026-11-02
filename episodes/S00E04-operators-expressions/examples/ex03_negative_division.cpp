// example: ex03_negative_division
// purpose: Show that integer division truncates toward zero and the remainder has the sign of the left operand.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    std::cout << -7 / 2 << ' ' << -7 % 2 << '\n';
    std::cout << 7 / -2 << ' ' << 7 % -2 << '\n';
    std::cout << -7 / -2 << ' ' << -7 % -2 << '\n';
}
