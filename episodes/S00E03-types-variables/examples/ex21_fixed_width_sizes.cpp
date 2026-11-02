// example: ex21_fixed_width_sizes
// purpose: Show the sizes of the fixed-width types from cstdint and of std::size_t on x86-64 Linux.
// expect: ok
// in-video: yes
#include <cstddef>
#include <cstdint>
#include <iostream>

int main() {
    std::cout << "int8_t   " << sizeof(std::int8_t) << '\n';
    std::cout << "int16_t  " << sizeof(std::int16_t) << '\n';
    std::cout << "int32_t  " << sizeof(std::int32_t) << '\n';
    std::cout << "uint64_t " << sizeof(std::uint64_t) << '\n';
    std::cout << "size_t   " << sizeof(std::size_t) << '\n';
}
