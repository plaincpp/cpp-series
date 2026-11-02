// example: ex01_declare_then_define
// purpose: Show a declaration before main and the definition after main.
// expect: ok
// in-video: yes
#include <iostream>

int square(int value);

int main() {
    std::cout << square(7) << '\n';
}

int square(int value) {
    return value * value;
}
