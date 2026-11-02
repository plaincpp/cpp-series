// example: ex28_catch_value_warning
// purpose: Show that GCC -Wall warns about a catch by value of a class with virtual functions (-Werror makes it an error).
// expect: compile-error
// expect-match: catching polymorphic type
// flags: -Werror
// compilers: gcc
#include <iostream>
#include <stdexcept>

int main() {
    try {
        throw std::runtime_error{"disk full"};
    } catch (std::runtime_error e) {
        std::cout << e.what() << '\n';
    }
}
