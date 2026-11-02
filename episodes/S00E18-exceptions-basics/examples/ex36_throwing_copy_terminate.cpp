// example: ex36_throwing_copy_terminate
// purpose: Show that a copy constructor that throws while a handler by value copies the exception object calls std::terminate.
// expect: runtime-error
// expect-match: terminate called after throwing an instance of 'int'
#include <iostream>

struct Bad {
    Bad() = default;
    Bad(const Bad&) { throw 1; }
};

int main() {
    try {
        throw Bad{};
    } catch (Bad) {
        std::cout << "handler\n";
    } catch (...) {
        std::cout << "other\n";
    }
}
