// example: ex10_stack_overflow
// purpose: Show a recursion with no end that fills the stack and gives a very long backtrace.
// expect: ub
// expect-match: stack-overflow
// flags: -g -O0
// stdin: -1
#include <iostream>

int sum_to(int n) {
    if (n == 0)
        return 0;
    return n + sum_to(n - 1);
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << sum_to(n) << '\n';
}
