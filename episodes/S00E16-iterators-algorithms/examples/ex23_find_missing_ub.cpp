// example: ex23_find_missing_ub
// purpose: Show that a read through the result of std::find without a check against end() is undefined behavior.
// expect: ub
// expect-match: heap-buffer-overflow
// stdin: 99
// in-video: yes
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41};
    int wanted = 0;
    std::cin >> wanted;
    auto it = std::find(ages.begin(), ages.end(), wanted);
    std::cout << *it << '\n';
}
