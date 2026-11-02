// example: ex16_destructor_early_return
// purpose: Show that the destructor runs on every return path, also on an early return.
// expect: ok
// in-video: yes
#include <iostream>
struct Log {
    Log() { std::cout << "open log\n"; }
    ~Log() { std::cout << "close log\n"; }
};
void parse(int value) {
    Log log;
    if (value < 0) return;
    std::cout << "parse " << value << '\n';
}
int main() {
    parse(-5);
    parse(7);
}
