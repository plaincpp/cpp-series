// example: ex17_leak_on_exception
// purpose: Show that an exception skips delete[], and LeakSanitizer reports the lost memory.
// expect: sanitizer
// expect-match: detected memory leaks
#include <iostream>
#include <stdexcept>
void check(int value) {
    if (value < 0) throw std::invalid_argument{"negative value"};
}
void save(int value) {
    int* buffer = new int[4]{};
    check(value);
    buffer[0] = value;
    delete[] buffer;
}
int main() {
    try {
        save(-1);
    } catch (const std::invalid_argument&) {
        std::cout << "rejected\n";
    }
}
