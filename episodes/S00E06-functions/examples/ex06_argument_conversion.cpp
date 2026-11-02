// example: ex06_argument_conversion
// purpose: Show that a double argument converts to an int parameter and loses its fraction.
// expect: ok
#include <iostream>

int square(int value) {
    return value * value;
}

int main() {
    double side = 2.5;
    std::cout << square(side) << '\n';
}
