// example: ex06_if_init_scope_error
// purpose: Show that a variable from an if initializer does not exist after the if statement.
// expect: compile-error
// expect-match: rest'
#include <iostream>

int main() {
    int total = 17;
    int box = 5;
    if (int rest = total % box; rest != 0) {
        std::cout << rest << " items left\n";
    }
    std::cout << rest << '\n';
}
