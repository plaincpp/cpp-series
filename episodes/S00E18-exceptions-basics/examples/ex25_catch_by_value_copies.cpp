// example: ex25_catch_by_value_copies
// purpose: Show that a handler that catches by value makes a copy of the exception object, and a reference handler does not.
// expect: ok
#include <iostream>

struct Tracked {
    Tracked() = default;
    Tracked(const Tracked&) { std::cout << "copy\n"; }
};

int main() {
    std::cout << "by value:\n";
    try {
        throw Tracked{};
    } catch (Tracked) {
        std::cout << "caught\n";
    }
    std::cout << "by reference:\n";
    try {
        throw Tracked{};
    } catch (const Tracked&) {
        std::cout << "caught\n";
    }
}
