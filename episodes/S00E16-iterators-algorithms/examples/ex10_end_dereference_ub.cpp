// example: ex10_end_dereference_ub
// purpose: Show that end() is not an element, so a read through it is undefined behavior.
// expect: ub
// expect-match: heap-buffer-overflow
// in-video: yes
// stdin: 3
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41};
    int steps = 0;
    std::cin >> steps;
    auto it = ages.begin() + steps;
    std::cout << *it << '\n';
}
