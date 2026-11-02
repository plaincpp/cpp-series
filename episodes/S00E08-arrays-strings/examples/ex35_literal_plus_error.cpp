// example: ex35_literal_plus_error
// purpose: Show that + on two string literals does not compile, because they are arrays, not strings.
// expect: compile-error
// expect-match: invalid operands
// in-video: yes
#include <iostream>

int main() {
    auto greeting = "Hello, " + "world";
    std::cout << greeting << '\n';
}
