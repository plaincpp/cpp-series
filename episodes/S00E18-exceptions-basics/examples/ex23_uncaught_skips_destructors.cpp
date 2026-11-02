// example: ex23_uncaught_skips_destructors
// purpose: Show that with GCC and Clang on Linux, an exception with no handler does not unwind the stack, so no destructor runs.
// expect: runtime-error
// expect-match: terminate called after throwing
#include <iostream>
#include <stdexcept>

struct Guard {
    ~Guard() { std::cerr << "~Guard\n"; }
};

int main() {
    Guard guard;
    std::cerr << "start\n";
    throw std::runtime_error{"no handler"};
}
