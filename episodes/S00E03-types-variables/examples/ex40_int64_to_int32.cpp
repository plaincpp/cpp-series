// example: ex40_int64_to_int32
// purpose: Show that a conversion to a smaller signed type gives the value modulo 2 to the power 32, with no warning under -Wall -Wextra.
// expect: ok
#include <cstdint>
#include <iostream>

int main() {
    std::int64_t big = 3'000'000'000;
    std::int32_t small = big;
    std::cout << small << '\n';
}
