// example: ex21_switch_initializer
// purpose: Use a switch statement with an initializer (C++17).
// expect: ok
#include <iostream>

int main() {
    int code = 404;
    switch (int group = code / 100; group) {
    case 2:
        std::cout << "success\n";
        break;
    case 4:
        std::cout << "client error " << code << '\n';
        break;
    default:
        std::cout << "other group " << group << '\n';
    }
}
