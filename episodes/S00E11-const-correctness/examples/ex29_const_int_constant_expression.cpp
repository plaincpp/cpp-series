// example: ex29_const_int_constant_expression
// purpose: Show that a const int with a constant initializer can be an array size.
// expect: ok
#include <array>
#include <iostream>
int main() {
    const int size = 4;
    std::array<int, size> values{};
    static_assert(size == 4);
    std::cout << values.size() << '\n';
}
