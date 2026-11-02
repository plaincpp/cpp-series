// example: ex32_unwinding_short
// purpose: Show in a short program that the destructor of a local object runs before the handler.
// expect: ok
// in-video: yes
#include <iostream>
struct Guard {
    ~Guard() { std::cout << "~Guard\n"; }
};
int main() {
    try {
        Guard guard;
        throw 1;
    } catch (...) { std::cout << "caught\n"; }
}
