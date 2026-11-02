// example: ex15_overload_promotion
// purpose: Show that a promotion (char, short, bool to int; float to double) wins over a conversion.
// expect: ok
#include <iostream>

void show(int) { std::cout << "int\n"; }
void show(double) { std::cout << "double\n"; }

int main() {
    char letter = 'A';
    short level = 7;
    float ratio = 2.5f;
    show(letter);
    show(level);
    show(true);
    show(ratio);
}
