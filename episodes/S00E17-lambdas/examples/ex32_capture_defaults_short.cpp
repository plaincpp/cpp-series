// example: ex32_capture_defaults_short
// purpose: Show the capture defaults [=] and [&] and a mixed capture [=, &total] in a short program for the screen.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int a = 1;
    int total = 0;
    auto copy_all = [=]() { return a * 10; };
    auto ref_all = [&]() { total = a * 10; };
    auto mixed = [=, &total]() { total += a; };
    a = 2;
    std::cout << copy_all() << '\n';
    ref_all();
    mixed();
    std::cout << total << '\n';
}
