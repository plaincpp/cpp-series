// example: ex15_case_jump_init_error
// purpose: Show that a jump to a case label must not skip the initialization of a variable.
// expect: compile-error
// expect-match: case label
#include <iostream>

int main() {
    int option = 2;
    switch (option) {
    case 1:
        int count = 10;
        std::cout << count << '\n';
        break;
    case 2:
        std::cout << "two\n";
        break;
    }
}
