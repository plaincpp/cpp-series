// example: ex09_default_captures
// purpose: Use the capture defaults [=] and [&], and mix them with named captures.
// expect: ok
#include <iostream>

int main() {
    int a = 1;
    int b = 2;
    int total = 0;
    auto copy_all = [=]() { return a + b; };
    auto ref_all = [&]() { total = a + b; };
    auto mixed = [=, &total]() { total += a * 10 + b; };
    auto ref_but_b = [&, b]() { return a + b; };
    a = 3;
    b = 4;
    std::cout << copy_all() << '\n';
    ref_all();
    std::cout << total << '\n';
    mixed();
    std::cout << total << '\n';
    std::cout << ref_but_b() << '\n';
}
