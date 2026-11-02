// example: ex32_for_scope_error
// purpose: Show that the variable from the for init statement does not exist after the loop.
// expect: compile-error
// expect-match: 'i'
#include <iostream>

int main() {
    for (int i = 0; i < 3; ++i) {
        std::cout << i << '\n';
    }
    std::cout << i << '\n';
}
