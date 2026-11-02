// example: ex11_rethrow
// purpose: Use throw; in a handler to send the same exception to an outer handler after a log line.
// expect: ok
#include <iostream>
#include <stdexcept>

void save() {
    try {
        throw std::runtime_error{"disk full"};
    } catch (const std::runtime_error& e) {
        std::cout << "log: " << e.what() << '\n';
        throw;
    }
}

int main() {
    try {
        save();
    } catch (const std::runtime_error& e) {
        std::cout << "main: " << e.what() << '\n';
    }
}
