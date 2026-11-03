// example: ex09_out_of_bounds_silent
// purpose: Show a read past the end of an array that does not crash, so only a sanitizer finds it.
// expect: ub
// expect-match: out of bounds
// flags: -g -O0
// stdin: 3
// in-video: yes
#include <iostream>

int main() {
    int scores[3]{70, 85, 90};
    int last = 0;
    std::cin >> last;
    int sum = 0;
    for (int i = 0; i <= last; ++i)
        sum += scores[i];
    std::cout << sum << '\n';
}
