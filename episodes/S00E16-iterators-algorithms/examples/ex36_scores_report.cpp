// example: ex36_scores_report
// purpose: Use count_if, erase_if and sort together in a small report on test results.
// expect: ok
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Result {
    std::string name;
    int score;
};

bool failed(const Result& result) {
    return result.score < 50;
}

bool higher(const Result& a, const Result& b) {
    return a.score > b.score;
}

int main() {
    std::vector<Result> results{
        {"Ali", 72}, {"Bo", 45}, {"Cy", 91}, {"Dee", 38}, {"Eve", 66}};
    auto failures = std::count_if(results.begin(), results.end(), failed);
    std::cout << "failed: " << failures << '\n';
    std::erase_if(results, failed);
    std::sort(results.begin(), results.end(), higher);
    for (const Result& result : results) {
        std::cout << result.name << ' ' << result.score << '\n';
    }
}
