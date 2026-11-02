// example: ex44_average_scores
// purpose: Use a std::array, a const reference parameter and size() to find an average score.
// expect: ok
#include <array>
#include <iostream>

double average(const std::array<int, 5>& scores) {
    int total = 0;
    for (int score : scores) {
        total += score;
    }
    return static_cast<double>(total) / scores.size();
}

int main() {
    std::array<int, 5> scores{90, 85, 77, 60, 98};
    std::cout << average(scores) << '\n';
}
