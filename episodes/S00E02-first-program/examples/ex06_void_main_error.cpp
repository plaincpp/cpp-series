// example: ex06_void_main_error
// purpose: Show that main must return int.
// expect: compile-error
// expect-match: must return 'int'
#include <iostream>

void main() {
    std::cout << "Hello, world!\n";
}
