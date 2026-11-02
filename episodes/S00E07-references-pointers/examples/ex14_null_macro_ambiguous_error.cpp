// example: ex14_null_macro_ambiguous_error
// purpose: Show that the old NULL macro makes the call ambiguous between the int and pointer overloads.
// expect: compile-error
// expect-match: is ambiguous
#include <cstddef>
#include <iostream>

void show(int) { std::cout << "int\n"; }
void show(int*) { std::cout << "pointer\n"; }

int main() {
    show(NULL);
}
