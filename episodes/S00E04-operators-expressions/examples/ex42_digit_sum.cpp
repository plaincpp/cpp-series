// example: ex42_digit_sum
// purpose: Use %, /= and ++ in a loop to count the digits of a number and add them.
// expect: ok
#include <iostream>

int main() {
    int number = 90210;
    int digits = 0;
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
        ++digits;
    }
    std::cout << digits << ' ' << sum << '\n';
}
