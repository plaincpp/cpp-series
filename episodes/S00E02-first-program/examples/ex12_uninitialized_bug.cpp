// example: ex12_uninitialized_bug
// purpose: Show that -Wall finds a read of an uninitialized variable (-Werror makes it an error).
// expect: compile-error
// expect-match: uninitialized
// flags: -Werror
// in-video: yes
#include <iostream>

int main() {
    int price = 4;
    int count;
    std::cout << "Cost: " << price * count << '\n';
}
