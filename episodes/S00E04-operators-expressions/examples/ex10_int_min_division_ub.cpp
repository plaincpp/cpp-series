// example: ex10_int_min_division_ub
// purpose: Show that INT_MIN / -1 overflows int and is undefined behavior.
// expect: ub
// expect-match: cannot be represented
// stdin: -2147483648 -1
#include <iostream>

int main() {
    int value = 0;
    int divisor = 1;
    std::cin >> value >> divisor;
    std::cout << value / divisor << '\n';
}
