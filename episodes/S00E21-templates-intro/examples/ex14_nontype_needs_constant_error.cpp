// example: ex14_nontype_needs_constant_error
// purpose: Show that a non-type template argument must be a constant expression, not a run-time variable.
// expect: compile-error
// expect-match: constant expression
// in-video: no
#include <array>
#include <cstddef>
#include <iostream>
int main() {
    std::size_t count = 3;
    std::array<int, count> values{};
    std::cout << values.size() << '\n';
}
