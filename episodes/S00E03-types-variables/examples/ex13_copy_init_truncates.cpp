// example: ex13_copy_init_truncates
// purpose: Show that initialization with = converts a double to int with no message and removes the fraction.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    double price = 9.99;
    int whole = price;
    std::cout << whole << '\n';
}
