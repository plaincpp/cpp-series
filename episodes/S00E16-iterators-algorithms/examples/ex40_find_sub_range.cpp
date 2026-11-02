// example: ex40_find_sub_range
// purpose: Show for checkpoint 2 that std::find on a part of a vector returns last, not end(), when it finds nothing.
// expect: ok
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41, 19, 52};
    auto pos = std::find(ages.begin(), ages.begin() + 2, 19);
    std::cout << pos - ages.begin() << '\n';
    std::cout << (pos == ages.end()) << '\n';
    std::cout << *pos << '\n';
}
