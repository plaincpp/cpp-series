// example: ex21_at_throws
// purpose: Show that at() checks the index and throws std::out_of_range for a bad index.
// expect: ok
// stdin: 7
// in-video: yes
#include <array>
#include <iostream>
#include <stdexcept>

int main() {
    std::array<int, 5> scores{90, 85, 77, 60, 95};
    int index = 0;
    std::cin >> index;
    try {
        std::cout << scores.at(index) << '\n';
    } catch (const std::out_of_range&) {
        std::cout << "bad index " << index << '\n';
    }
}
