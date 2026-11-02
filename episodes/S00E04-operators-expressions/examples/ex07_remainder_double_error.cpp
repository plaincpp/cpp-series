// example: ex07_remainder_double_error
// purpose: Show that the % operator does not accept a double operand.
// expect: compile-error
// expect-match: invalid operands
#include <iostream>

int main() {
    double length = 7.5;
    std::cout << length % 2 << '\n';
}
