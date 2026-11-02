// example: ex27_remove_new_end
// purpose: Show that std::remove moves the kept elements to the front and returns the new end of the range.
// expect: ok
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 0, 41, 0, 19};
    auto new_end = std::remove(ages.begin(), ages.end(), 0);
    std::cout << ages.size() << '\n';
    std::cout << new_end - ages.begin() << '\n';
    for (auto it = ages.begin(); it != new_end; ++it) {
        std::cout << *it << ' ';
    }
    std::cout << '\n';
}
