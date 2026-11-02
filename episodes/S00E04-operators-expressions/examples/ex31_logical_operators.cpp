// example: ex31_logical_operators
// purpose: Show &&, || and !, and that a number that is not zero converts to true.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    bool on = true;
    bool off = false;
    int items = 3;
    std::cout << std::boolalpha;
    std::cout << (on && off) << ' ' << (on || off) << '\n';
    std::cout << !on << ' ' << !off << '\n';
    std::cout << (items && on) << ' ' << !items << '\n';
}
