// example: ex32_push_back_in_loop_ub
// purpose: Show that push_back in an iterator loop can move the elements, so the iterator points to freed memory.
// expect: ub
// expect-match: heap-use-after-free
// stdin: 1
// in-video: yes
#include <iostream>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41};
    int bonus = 0;
    std::cin >> bonus;
    for (auto it = ages.begin(); it != ages.end(); ++it) {
        if (*it > 28) {
            ages.push_back(*it + bonus);
        }
    }
    std::cout << ages.size() << '\n';
}
