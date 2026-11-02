// example: ex18_aliasing_parameters
// purpose: Show that two reference parameters can refer to one object, and the result changes.
// expect: ok
#include <iostream>

void add_twice(int& total, const int& amount) {
    total = total + amount;
    total = total + amount;
}

int main() {
    int a = 1;
    int b = 1;
    int c = 1;
    add_twice(a, b);
    add_twice(c, c);
    std::cout << a << ' ' << c << '\n';
}
