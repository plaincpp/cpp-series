// example: ex01_if_else
// purpose: Use if and else to select one of two branches.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int stock = 0;
    if (stock > 0) {
        std::cout << "in stock\n";
    } else {
        std::cout << "sold out\n";
    }
}
