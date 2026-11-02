// example: ex46_break_outside_loop_error
// purpose: Show that break is not permitted outside a loop or a switch.
// expect: compile-error
// expect-match: loop or switch
#include <iostream>

int main() {
    int n = 3;
    if (n > 2) {
        break;
    }
    std::cout << n << '\n';
}
