// example: ex38_least_fast_sizes
// purpose: Show the sizes of int_least32_t and int_fast32_t on x86-64 Linux with glibc.
// expect: ok
#include <cstdint>
#include <iostream>

int main() {
    std::cout << sizeof(std::int_least32_t) << '\n';
    std::cout << sizeof(std::int_fast32_t) << '\n';
}
