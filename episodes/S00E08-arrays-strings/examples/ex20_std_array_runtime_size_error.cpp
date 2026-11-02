// example: ex20_std_array_runtime_size_error
// purpose: Show that the size of a std::array must be a constant that the compiler knows.
// expect: compile-error
// expect-match: constant expression
#include <array>
#include <iostream>

int main() {
    int count = 0;
    std::cin >> count;
    std::array<int, count> values{};
    std::cout << values.size() << '\n';
}
