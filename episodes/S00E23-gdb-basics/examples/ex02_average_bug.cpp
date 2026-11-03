// example: ex02_average_bug
// purpose: Show a wrong result with no crash that print in GDB helps to find.
// expect: ok
// flags: -g -O0
// in-video: yes
#include <iostream>
#include <vector>

double average(const std::vector<int>& scores) {
    int sum = 0;
    for (int s : scores)
        sum += s;
    return sum / scores.size();
}

int main() {
    std::vector<int> scores{70, 85, 90};
    std::cout << "average: " << average(scores) << '\n';
}
