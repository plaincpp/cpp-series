// example: ex24_catch_all_in_main
// purpose: Use handlers in main that catch every exception, so the stack unwinds and every destructor runs.
// expect: ok
#include <iostream>
#include <stdexcept>

struct Guard {
    ~Guard() { std::cout << "~Guard\n"; }
};

void run() {
    Guard guard;
    throw std::runtime_error{"no handler"};
}

int main() {
    try {
        run();
    } catch (const std::exception& e) {
        std::cout << "error: " << e.what() << '\n';
    } catch (...) {
        std::cout << "unknown error\n";
    }
}
