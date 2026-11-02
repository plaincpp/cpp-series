// example: ex39_char_array_too_long_error
// purpose: Show that a char array needs one more element for the null character at the end.
// expect: compile-error
// expect-match: initializer-string for
#include <iostream>

int main() {
    char word[3] = "cat";
    std::cout << word << '\n';
}
