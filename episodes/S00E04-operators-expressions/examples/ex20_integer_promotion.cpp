// example: ex20_integer_promotion
// purpose: Show that char and uint8_t operands become int before arithmetic.
// expect: ok
// in-video: no
#include <cstdint>
#include <iostream>

int main() {
    char letter = 'a';
    std::cout << letter + 1 << '\n';
    std::uint8_t level = 200;
    std::uint8_t bonus = 100;
    std::cout << level + bonus << '\n';
    std::uint8_t stored = level + bonus;
    std::cout << +stored << '\n';
}
