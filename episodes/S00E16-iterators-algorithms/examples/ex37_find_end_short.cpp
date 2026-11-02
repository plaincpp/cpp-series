// example: ex37_find_end_short
// purpose: Show in a Short that std::find returns end() when it finds nothing, and end() is one past the last element.
// expect: ok
// in-video: yes
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v{3, 1, 2};
    auto it = std::find(v.begin(), v.end(), 7);
    std::cout << (it == v.end()) << '\n';
    std::cout << it - v.begin() << '\n';
}
