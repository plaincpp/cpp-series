// example: ex16_crash_line_short
// purpose: Give a short crash for a Short: GDB names the line of the null pointer read.
// expect: ub
// expect-match: null pointer
// flags: -g -O0
// stdin: 5
// in-video: yes
#include <iostream>

int main() {
    int stock[]{4, 0, 9};
    unsigned id = 0;
    std::cin >> id;
    int* item = id < 3 ? &stock[id] : nullptr;
    std::cout << *item << '\n';
}
