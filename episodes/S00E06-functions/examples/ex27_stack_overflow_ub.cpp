// example: ex27_stack_overflow_ub
// purpose: Show that very deep recursion uses all of the stack, and AddressSanitizer reports a stack overflow.
// expect: ub
// expect-match: stack-overflow
// stdin: 100000000
// in-video: yes
#include <iostream>

int depth(int n) {
    if (n == 0) return 0;
    return 1 + depth(n - 1);
}

int main() {
    int n = 0;
    std::cin >> n;
    std::cout << depth(n) << '\n';
}
