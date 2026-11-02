// example: ex12_narrowing_variable_werror
// purpose: Show that GCC only warns about narrowing from a variable in braces, so build with -Werror.
// expect: compile-error
// expect-match: narrow
// flags: -Werror
#include <iostream>

int main() {
    double price = 9.99;
    int whole{price};
    std::cout << whole << '\n';
}
