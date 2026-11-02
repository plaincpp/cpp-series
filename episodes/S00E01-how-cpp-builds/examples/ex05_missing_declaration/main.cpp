// example: ex05_missing_declaration
// purpose: Show that the compiler stops when a file uses a name with no declaration.
// expect: compile-error
// expect-match: declared
// in-video: yes
#include <iostream>

int main() {
    std::cout << add(2, 3) << '\n';
}
