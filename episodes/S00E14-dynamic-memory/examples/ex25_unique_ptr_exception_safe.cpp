// example: ex25_unique_ptr_exception_safe
// purpose: Use std::unique_ptr in the function of ex17, so that the buffer is freed when an exception occurs.
// expect: ok
#include <iostream>
#include <memory>
#include <stdexcept>
void check(int value) {
    if (value < 0) throw std::invalid_argument{"negative value"};
}
void save(int value) {
    auto buffer = std::make_unique<int[]>(4);
    check(value);
    buffer[0] = value;
}
int main() {
    try {
        save(-1);
    } catch (const std::invalid_argument&) {
        std::cout << "rejected\n";
    }
}
