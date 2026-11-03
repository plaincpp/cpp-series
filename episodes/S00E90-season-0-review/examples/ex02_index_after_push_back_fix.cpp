// example: ex02_index_after_push_back_fix
// purpose: Keep an index, not a reference, because an index stays correct after push_back.
// expect: ok
// stdin: 100
// in-video: yes
#include <cstddef>
#include <iostream>
#include <vector>
int main() {
    std::vector<int> scores{70, 80, 90};
    std::size_t first = 0;
    int extra = 0;
    std::cin >> extra;
    scores.push_back(extra);
    std::cout << scores[first] << '\n';
}
