// example: ex10_uninitialized_pointer_werror
// purpose: Show that -Wall finds a pointer with no initial value, and -Werror stops the build.
// expect: compile-error
// expect-match: uninitialized
// flags: -Werror
#include <iostream>

int main() {
    int* ptr;
    *ptr = 5;
    std::cout << "done\n";
}
