// example: ex26_zero_digits_do_while
// purpose: Show that the while loop counts 0 digits for the number 0, and the do-while loop counts 1.
// expect: ok
// stdin: 0
#include <iostream>

int main() {
    int number = 0;
    std::cin >> number;
    int a = number;
    int while_digits = 0;
    while (a > 0) {
        a /= 10;
        ++while_digits;
    }
    int b = number;
    int do_digits = 0;
    do {
        b /= 10;
        ++do_digits;
    } while (b > 0);
    std::cout << "while: " << while_digits << '\n';
    std::cout << "do-while: " << do_digits << '\n';
}
