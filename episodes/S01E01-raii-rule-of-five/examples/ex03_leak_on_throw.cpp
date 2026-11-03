// example: ex03_leak_on_throw
// purpose: Show that a throw skips delete[], and LeakSanitizer reports the lost memory.
// expect: sanitizer
// expect-match: detected memory leaks
// in-video: yes
#include <stdexcept>
void check(int value) {
    if (value < 0) throw std::invalid_argument{"negative"};
}
void process(int value) {
    int* buffer = new int[256]{};
    check(value);
    delete[] buffer;
}
int main() {
    try { process(-1); } catch (const std::exception&) {}
}
