// example: ex34_nullptr_short
// purpose: Show in a Short that 0 selects the int overload and nullptr selects the pointer overload.
// expect: ok
// in-video: yes
#include <iostream>

void f(int) { std::cout << "int\n"; }
void f(int*) { std::cout << "int*\n"; }

int main() {
    f(0);
    f(nullptr);
}
