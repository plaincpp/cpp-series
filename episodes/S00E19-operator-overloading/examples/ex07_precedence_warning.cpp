// example: ex07_precedence_warning
// purpose: Show that GCC warns about two ^ 2 + 1, because an overloaded ^ keeps the low precedence of ^.
// expect: compile-error
// expect-match: suggest parentheses around arithmetic in operand of '^'
// flags: -Werror
// compilers: gcc
#include <iostream>
struct Number {
    int value;
};
Number operator^(Number base, int exponent) {
    int result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base.value;
    }
    return {result};
}
int main() {
    Number two{2};
    Number a = two ^ 2 + 1;
    std::cout << a.value << '\n';
}
