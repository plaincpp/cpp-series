// example: ex16_std_array_basics
// purpose: Use std::array, which knows its size and copies and compares as a value.
// expect: ok
// in-video: yes
#include <array>
#include <iostream>

int main() {
    std::array<int, 5> scores{90, 85, 77, 60, 95};
    std::cout << scores.size() << '\n';
    std::array<int, 5> copy = scores;
    copy[0] = 100;
    std::cout << scores[0] << ' ' << copy[0] << '\n';
    std::cout << std::boolalpha << (scores == copy) << '\n';
}
