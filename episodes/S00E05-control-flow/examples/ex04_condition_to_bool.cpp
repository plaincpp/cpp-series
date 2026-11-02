// example: ex04_condition_to_bool
// purpose: Show that a number in a condition converts to bool: zero is false, other values are true.
// expect: ok
#include <iostream>

int main() {
    int count = 3;
    if (count) {
        std::cout << "3 is true\n";
    }
    int zero = 0;
    if (!zero) {
        std::cout << "0 is false\n";
    }
    int minus = -1;
    if (minus) {
        std::cout << "-1 is true\n";
    }
    double half = 0.5;
    if (half) {
        std::cout << "0.5 is true\n";
    }
}
