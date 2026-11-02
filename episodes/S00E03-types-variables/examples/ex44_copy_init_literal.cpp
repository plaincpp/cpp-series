// example: ex44_copy_init_literal
// purpose: Show that = converts the literal 9.99 to int; GCC gives no warning and Clang warns about the literal.
// expect: ok
#include <iostream>

int main() {
    int whole = 9.99;
    std::cout << whole << '\n';
}
