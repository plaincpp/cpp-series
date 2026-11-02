// example: ex02_call_before_declaration_error
// purpose: Show that a call to a function with no declaration above it does not compile.
// expect: compile-error
// expect-match: declared
// in-video: yes
#include <iostream>

int main() {
    std::cout << square(7) << '\n';
}

int square(int value) {
    return value * value;
}
