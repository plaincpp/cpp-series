// example: ex39_compound_narrowing_pitfall
// purpose: Show that += converts the result back to the type of the left operand with no warning.
// expect: ok
// in-video: yes
#include <cstdint>
#include <iostream>

int main() {
    int total = 10;
    total += 2.7;
    std::cout << total << '\n';
    std::uint8_t level = 250;
    level += 10;
    std::cout << +level << '\n';
}
