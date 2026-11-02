// example: ex37_literal_readonly_error
// purpose: Show that the characters of a string literal are const, so you cannot change them.
// expect: compile-error
// expect-match: read-only
#include <iostream>

int main() {
    const char* name = "cat";
    name[0] = 'b';
    std::cout << name << '\n';
}
