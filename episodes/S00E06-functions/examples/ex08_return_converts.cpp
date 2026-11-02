// example: ex08_return_converts
// purpose: Show that the return value converts to the return type, so an int function loses the fraction.
// expect: ok
#include <iostream>

int half(double value) {
    return value / 2;
}

int main() {
    std::cout << half(5.0) << '\n';
}
