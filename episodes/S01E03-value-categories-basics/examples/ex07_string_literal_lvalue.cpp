// example: ex07_string_literal_lvalue
// purpose: Show that a string literal is an lvalue array, so you can take its address.
// expect: ok
#include <iostream>

int main() {
    auto p = &"abc";
    std::cout << sizeof(*p) << ' ' << (*p)[1] << '\n';
}
