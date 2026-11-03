// example: ex11_optimized_out
// purpose: Build the ex01 code with -O2 -g to show optimized-out variables in GDB.
// expect: ok
// flags: -g -O2
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
