// example: ex19_index_compile_time
// purpose: Show that the compiler finds a bad index when it knows the index value.
// expect: compile-error
// expect-match: static assertion failed
#include <array>
#include <iostream>

int main() {
    std::array<int, 3> scores{90, 75, 60};
    std::cout << std::get<5>(scores) << '\n';
}
