// example: ex06_precedence_fixed
// purpose: Show that an overloaded ^ keeps the low precedence of the built-in ^, so 2 + 1 happens first.
// expect: ok
// in-video: no
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
    Number a = two ^ (2 + 1);
    Number b = two ^ 2;
    std::cout << a.value << ' ' << b.value + 1 << '\n';
}
