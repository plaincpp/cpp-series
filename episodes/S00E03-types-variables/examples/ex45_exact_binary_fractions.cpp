// example: ex45_exact_binary_fractions
// purpose: Show that 0.5 + 0.25 == 0.75 is true, because the three values have exact binary forms, but 0.1 + 0.2 == 0.3 is false.
// expect: ok
#include <iostream>

int main() {
    std::cout << std::boolalpha;
    std::cout << (0.5 + 0.25 == 0.75) << '\n';
    std::cout << (0.1 + 0.2 == 0.3) << '\n';
}
