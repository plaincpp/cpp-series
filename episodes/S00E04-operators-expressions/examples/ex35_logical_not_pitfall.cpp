// example: ex35_logical_not_pitfall
// purpose: Show that ! applies only to the left operand of ==, and that -Wall finds it.
// expect: compile-error
// expect-match: logical not is only applied to the left hand side
// flags: -Werror
#include <iostream>

int main() {
    int level = 3;
    if (!level == 5) {
        std::cout << "level is not 5\n";
    }
}
