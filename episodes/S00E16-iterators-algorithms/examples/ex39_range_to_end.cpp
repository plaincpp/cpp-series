// example: ex39_range_to_end
// purpose: Count the elements of the range from begin() + 2 to end() for checkpoint 1: last - first.
// expect: ok
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41, 19, 52};
    auto first = ages.begin() + 2;
    auto last = ages.end();
    std::cout << last - first << '\n';
    for (auto it = first; it != last; ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
}
