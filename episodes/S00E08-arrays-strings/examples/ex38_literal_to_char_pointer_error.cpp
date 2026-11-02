// example: ex38_literal_to_char_pointer_error
// purpose: Show that C++11 and later do not let a char* point to a string literal.
// expect: compile-error
// expect-match: ISO C++
// flags: -Werror
#include <iostream>

int main() {
    char* name = "cat";
    std::cout << name << '\n';
}
