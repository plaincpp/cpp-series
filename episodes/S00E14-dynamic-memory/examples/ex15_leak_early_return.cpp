// example: ex15_leak_early_return
// purpose: Show that an early return skips delete[], and LeakSanitizer reports the lost memory at exit.
// expect: sanitizer
// expect-match: detected memory leaks
// in-video: yes
#include <iostream>
bool save(int value) {
    int* buffer = new int[4]{};
    if (value < 0) return false;
    buffer[0] = value;
    delete[] buffer;
    return true;
}
int main() {
    std::cout << save(5) << '\n';
    std::cout << save(-1) << '\n';
}
