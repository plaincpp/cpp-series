// example: ex22_fixed_width_limits
// purpose: Show the ranges of int32_t, int64_t and uint64_t, which are the same on every platform that has them.
// expect: ok
#include <cstdint>
#include <iostream>
#include <limits>

int main() {
    using std::numeric_limits;
    std::cout << numeric_limits<std::int32_t>::min() << '\n';
    std::cout << numeric_limits<std::int32_t>::max() << '\n';
    std::cout << numeric_limits<std::int64_t>::max() << '\n';
    std::cout << numeric_limits<std::uint64_t>::max() << '\n';
}
