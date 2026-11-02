// example: ex21_generic_comparator
// purpose: Use one generic lambda as the comparison for a vector of int and a vector of strings.
// expect: ok
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    auto descending = [](const auto& a, const auto& b) { return a > b; };
    std::vector<int> scores{70, 95, 60};
    std::vector<std::string> names{"Ben", "Ada", "Cy"};
    std::sort(scores.begin(), scores.end(), descending);
    std::sort(names.begin(), names.end(), descending);
    for (int score : scores) {
        std::cout << score << ' ';
    }
    std::cout << '\n';
    for (const std::string& name : names) {
        std::cout << name << ' ';
    }
    std::cout << '\n';
}
