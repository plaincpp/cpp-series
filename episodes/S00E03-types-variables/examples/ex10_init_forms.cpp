// example: ex10_init_forms
// purpose: Show the three initialization forms, and that empty braces give the value zero.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int a = 7;
    int b(7);
    int c{7};
    int d{};
    double e{};
    std::cout << a << ' ' << b << ' ' << c << '\n';
    std::cout << d << ' ' << e << '\n';
}
