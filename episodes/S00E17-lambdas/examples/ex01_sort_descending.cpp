// example: ex01_sort_descending
// purpose: Pass a lambda to std::sort to sort scores from high to low.
// expect: ok
// in-video: yes
#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::vector<int> scores{70, 95, 60, 85};
    std::sort(scores.begin(), scores.end(),
              [](int a, int b) { return a > b; });
    for (int score : scores) {
        std::cout << score << ' ';
    }
    std::cout << '\n';
}
