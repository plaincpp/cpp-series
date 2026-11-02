// example: ex14_wconversion_warning
// purpose: Show that -Wconversion finds the double to int conversion of ex13 (-Werror makes it an error).
// expect: compile-error
// expect-match: float-conversion
// flags: -Wconversion -Werror
#include <iostream>

int main() {
    double price = 9.99;
    int whole = price;
    std::cout << whole << '\n';
}
