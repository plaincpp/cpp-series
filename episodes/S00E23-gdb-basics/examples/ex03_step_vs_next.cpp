// example: ex03_step_vs_next
// purpose: Compare step, which goes into a call, with next, which runs the call as one line.
// expect: ok
// flags: -g -O0
#include <iostream>

int square(int x) {
    return x * x;
}

int sum_of_squares(int a, int b) {
    int first = square(a);
    int second = square(b);
    return first + second;
}

int main() {
    std::cout << sum_of_squares(3, 4) << '\n';
}
