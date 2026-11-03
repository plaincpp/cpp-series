// example: ex09_reference_binding
// purpose: Show which values bind to int&, const int& and int&&.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int count = 5;
    int& a = count;
    const int& b = 42;
    int&& c = count + 1;
    c += 10;
    std::cout << a << ' ' << b << ' ' << c << '\n';
}
