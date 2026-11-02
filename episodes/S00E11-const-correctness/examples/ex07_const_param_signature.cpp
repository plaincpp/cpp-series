// example: ex07_const_param_signature
// purpose: Show that a top-level const on a value parameter does not change the function type.
// expect: ok
#include <iostream>
#include <type_traits>
int twice(int value);
int twice(const int value) {
    return value * 2;
}
int main() {
    static_assert(std::is_same_v<int(int), int(const int)>);
    std::cout << twice(21) << '\n';
}
