// example: ex24_uninitialized_short
// purpose: Show the uninitialized read of ex12 with lines of 40 characters or fewer, for a vertical Short.
// expect: compile-error
// expect-match: uninitialized
// flags: -Werror
// in-video: yes
#include <iostream>

int main() {
    int price = 4;
    int count;
    std::cout << price * count << '\n';
}
