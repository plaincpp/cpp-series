// example: ex09_empty_range
// purpose: Show that an empty range has begin equal to end, so loops and algorithms do nothing on it.
// expect: ok
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages;
    std::cout << (ages.begin() == ages.end()) << '\n';
    int visits = 0;
    for (auto it = ages.begin(); it != ages.end(); ++it) {
        ++visits;
    }
    std::cout << visits << '\n';
    std::sort(ages.begin(), ages.end());
    std::cout << ages.size() << '\n';
    std::vector<int> one{7};
    std::cout << one.end() - one.begin() << '\n';
}
