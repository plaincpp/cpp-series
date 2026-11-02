// example: ex13_precedence_basics
// purpose: Show that * and / come before + and -, and that parentheses change the order.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    std::cout << 2 + 3 * 4 << '\n';
    std::cout << (2 + 3) * 4 << '\n';
    std::cout << 10 - 4 - 3 << '\n';
    std::cout << 100 / 10 / 5 << '\n';
}
