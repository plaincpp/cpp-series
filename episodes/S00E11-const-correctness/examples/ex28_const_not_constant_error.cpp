// example: ex28_const_not_constant_error
// purpose: Show that a const variable from run time cannot be an array size.
// expect: compile-error
// expect-match: constant expression
#include <array>
#include <iostream>
int main() {
    int input = 0;
    std::cin >> input;
    const int size = input;
    std::array<int, size> values{};
    std::cout << sizeof(values) << '\n';
}
