// example: ex08_half_open_range
// purpose: Show the half-open range [first, last): it includes first, stops before last and has last - first elements.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41, 19, 52};
    auto first = ages.begin() + 1;
    auto last = ages.begin() + 4;
    for (auto it = first; it != last; ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
    std::cout << last - first << '\n';
}
