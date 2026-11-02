// example: ex25_at_index_loop
// purpose: Show that at() accepts 0 to size() - 1, and that -1 becomes a very large unsigned index.
// expect: ok
#include <array>
#include <iostream>
#include <stdexcept>

int main() {
    std::array<int, 5> scores{90, 85, 77, 60, 95};
    for (int index : {0, 4, 5, -1}) {
        try {
            std::cout << index << ": " << scores.at(index) << '\n';
        } catch (const std::out_of_range&) {
            std::cout << "out of range\n";
        }
    }
}
