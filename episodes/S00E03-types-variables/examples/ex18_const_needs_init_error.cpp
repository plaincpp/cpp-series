// example: ex18_const_needs_init_error
// purpose: Show that a const int must have an initializer.
// expect: compile-error
// expect-match: const
#include <iostream>

int main() {
    const int limit;
    std::cout << limit << '\n';
}
