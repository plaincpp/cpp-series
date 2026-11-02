// example: ex06_syntax_error
// purpose: Show that a missing semicolon stops the build at the compile step.
// expect: compile-error
// expect-match: expected ';'
#include <iostream>

int main() {
    std::cout << "Hello, C++\n"
}
