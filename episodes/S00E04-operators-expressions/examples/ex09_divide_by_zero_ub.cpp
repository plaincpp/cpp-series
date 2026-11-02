// example: ex09_divide_by_zero_ub
// purpose: Show that integer division by zero is undefined behavior, found by UBSan.
// expect: ub
// expect-match: division by zero
// stdin: 0
// in-video: yes
#include <iostream>

int main() {
    int total = 90;
    int count = 1;
    std::cin >> count;
    std::cout << total / count << '\n';
}
