// example: ex13_unwinding_destructors
// purpose: Show that a throw runs the destructors of the local objects before the catch block.
// expect: ok
#include <iostream>
#include <stdexcept>
struct File {
    File() { std::cout << "open\n"; }
    ~File() { std::cout << "close\n"; }
};
void load(int size) {
    File file;
    if (size < 0) {
        throw std::invalid_argument{"negative size"};
    }
    std::cout << "load\n";
}
int main() {
    try {
        load(-1);
    } catch (const std::invalid_argument&) {
        std::cout << "caught\n";
    }
}
