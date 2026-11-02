// example: ex14_overload_three_types
// purpose: Show that the compiler selects the overload whose parameter type matches the argument.
// expect: ok
// in-video: yes
#include <iostream>

void show(int) { std::cout << "int\n"; }
void show(double) { std::cout << "double\n"; }
void show(const char*) { std::cout << "const char*\n"; }

int main() {
    show(42);
    show(4.5);
    show("hello");
}
