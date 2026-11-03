// example: ex01_reference_after_push_back_ub
// purpose: Show that push_back can move the vector elements, so an old reference to an element dangles.
// expect: ub
// expect-match: heap-use-after-free
// stdin: 100
// in-video: yes
#include <iostream>
#include <vector>
int main() {
    std::vector<int> scores{70, 80, 90};
    int& first = scores[0];
    int extra = 0;
    std::cin >> extra;
    scores.push_back(extra);
    std::cout << first << '\n';
}
