// example: ex13_nullptr_overload
// purpose: Show that 0 selects the int overload and nullptr selects the pointer overload.
// expect: ok
#include <iostream>

void show(int) { std::cout << "int\n"; }
void show(int*) { std::cout << "pointer\n"; }

int main() {
    show(0);
    show(nullptr);
}
