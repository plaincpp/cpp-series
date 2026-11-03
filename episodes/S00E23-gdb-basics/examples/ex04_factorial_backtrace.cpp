// example: ex04_factorial_backtrace
// purpose: Show one stack frame for each active call in the backtrace of a recursive function.
// expect: ok
// flags: -g -O0
// in-video: yes
#include <iostream>

long factorial(int n) {
    if (n <= 1)
        return 1;
    return n * factorial(n - 1);
}

int main() {
    std::cout << factorial(4) << '\n';
}
