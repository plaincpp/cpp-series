// example: ex27_do_while_semicolon_error
// purpose: Show that a do-while statement needs a semicolon after the condition.
// expect: compile-error
// expect-match: expected ';'
#include <iostream>

int main() {
    int n = 0;
    do {
        ++n;
    } while (n < 3)
    std::cout << n << '\n';
}
