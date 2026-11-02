// example: ex40_break_continue
// purpose: Use continue to skip one element and break to stop the loop.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int readings[] = {4, 0, 7, -1, 9};
    for (int value : readings) {
        if (value == 0) {
            continue;
        }
        if (value < 0) {
            break;
        }
        std::cout << value << '\n';
    }
}
