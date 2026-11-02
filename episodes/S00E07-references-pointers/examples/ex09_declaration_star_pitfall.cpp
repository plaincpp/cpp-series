// example: ex09_declaration_star_pitfall
// purpose: Show on x86-64 Linux that int* first, second; makes only first a pointer.
// expect: ok
#include <iostream>

int main() {
    int* first, second;
    int value = 5;
    first = &value;
    second = value;
    std::cout << sizeof(first) << ' ' << sizeof(second) << '\n';
}
