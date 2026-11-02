// example: ex21_destructor_throw_terminate
// purpose: Show that a destructor is noexcept by default, so a throw from it calls std::terminate, also with a handler in main.
// expect: runtime-error
// expect-match: terminate called after throwing an instance of 'std::runtime_error'
#include <iostream>
#include <stdexcept>

struct Logger {
    ~Logger() { throw std::runtime_error{"flush failed"}; }
};

int main() {
    try {
        Logger log;
    } catch (const std::exception&) {
        std::cout << "caught\n";
    }
}
