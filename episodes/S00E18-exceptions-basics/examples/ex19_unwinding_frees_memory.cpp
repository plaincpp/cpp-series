// example: ex19_unwinding_frees_memory
// purpose: Show that stack unwinding runs the destructor of a std::unique_ptr, so the memory is freed when an exception occurs.
// expect: ok
#include <iostream>
#include <memory>
#include <stdexcept>

struct Buffer {
    Buffer() { std::cout << "allocate\n"; }
    ~Buffer() { std::cout << "free\n"; }
};

void process(bool fail) {
    auto buffer = std::make_unique<Buffer>();
    if (fail) throw std::runtime_error{"process failed"};
    std::cout << "work done\n";
}

int main() {
    try {
        process(true);
    } catch (const std::runtime_error& e) {
        std::cout << "caught: " << e.what() << '\n';
    }
}
