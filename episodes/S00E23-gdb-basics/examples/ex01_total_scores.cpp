// example: ex01_total_scores
// purpose: Give a small program to step through with breakpoints in GDB.
// expect: ok
// flags: -g -O0
// in-video: yes
#include <iostream>
#include <vector>

int total(const std::vector<int>& scores) {
    int sum = 0;
    for (int s : scores)
        sum += s;
    return sum;
}

int main() {
    std::vector<int> scores{70, 85, 90};
    std::cout << "total: " << total(scores) << '\n';
}
