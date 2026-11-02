// example: ex35_unsigned_countdown_pitfall
// purpose: Show that i >= 0 is always true for an unsigned i, so a countdown loop never stops.
// expect: compile-error
// expect-match: is always true
// flags: -Wtype-limits -Werror
#include <iostream>

int main() {
    for (unsigned int i = 3; i >= 0; --i) {
        std::cout << i << '\n';
    }
}
