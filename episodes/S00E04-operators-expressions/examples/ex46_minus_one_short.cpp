// example: ex46_minus_one_short
// purpose: Show that -1 < 1u is false, with short lines for a vertical Short.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int balance = -1;
    unsigned int limit = 1;
    bool less = balance < limit;
    std::cout << std::boolalpha;
    std::cout << less << '\n';
}
