// example: ex22_find_basics
// purpose: Use std::find: it returns an iterator to the first match, or end() when there is no match.
// expect: ok
// in-video: yes
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41, 19};
    auto it = std::find(ages.begin(), ages.end(), 41);
    if (it != ages.end()) {
        std::cout << "found at " << it - ages.begin() << '\n';
    }
    auto missing = std::find(ages.begin(), ages.end(), 99);
    std::cout << (missing == ages.end()) << '\n';
}
