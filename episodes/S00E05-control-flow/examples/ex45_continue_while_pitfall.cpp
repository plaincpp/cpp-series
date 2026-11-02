// example: ex45_continue_while_pitfall
// purpose: Show that continue in a while loop can skip the update, so the loop does not end.
// expect: ok
#include <iostream>

int main() {
    int i = 0;
    int steps = 0;
    while (i < 6 && steps < 50) {
        ++steps;
        if (i % 2 == 0) {
            continue;
        }
        ++i;
    }
    std::cout << "i " << i << ", steps " << steps << '\n';
}
