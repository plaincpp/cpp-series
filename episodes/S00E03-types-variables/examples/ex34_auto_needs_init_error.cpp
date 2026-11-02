// example: ex34_auto_needs_init_error
// purpose: Show that a variable with auto must have an initializer, because auto takes the type from it.
// expect: compile-error
// expect-match: initializer
#include <iostream>

int main() {
    auto total;
    std::cout << total << '\n';
}
