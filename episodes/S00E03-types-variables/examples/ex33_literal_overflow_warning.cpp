// example: ex33_literal_overflow_warning
// purpose: Show that a literal that does not fit in int gives a default warning (-Werror makes it an error).
// expect: compile-error
// expect-match: changes value from
// flags: -Werror
#include <iostream>

int main() {
    int big = 3'000'000'000;
    std::cout << big << '\n';
}
