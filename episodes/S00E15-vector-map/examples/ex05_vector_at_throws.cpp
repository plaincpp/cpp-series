// example: ex05_vector_at_throws
// purpose: Show that at() checks the index and throws std::out_of_range for an index past the end.
// expect: ok
// stdin: 3
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
    std::vector<int> scores{90, 85, 77};
    std::size_t index = 0;
    std::cin >> index;
    try {
        std::cout << scores.at(index) << '\n';
    } catch (const std::out_of_range&) {
        std::cout << "bad index " << index << '\n';
    }
}
