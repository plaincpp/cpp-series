// example: ex25_nested_calls
// purpose: Show three frames on the call stack: main, sum_of_squares and square.
// expect: ok
// in-video: yes
#include <iostream>

int square(int value) {
    return value * value;
}

int sum_of_squares(int a, int b) {
    int total = square(a) + square(b);
    return total;
}

int main() {
    std::cout << sum_of_squares(3, 4) << '\n';
}
