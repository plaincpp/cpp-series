// example: ex27_score_lookup_helper
// purpose: Write a lookup function that takes a const map and returns a fallback value for a missing key.
// expect: ok
#include <iostream>
#include <map>
#include <string>

int score_or(const std::map<std::string, int>& scores,
             const std::string& name, int fallback) {
    auto it = scores.find(name);
    if (it == scores.end()) {
        return fallback;
    }
    return it->second;
}

int main() {
    const std::map<std::string, int> scores{{"Ali", 90}, {"Mia", 85}};
    std::cout << score_or(scores, "Mia", -1) << '\n';
    std::cout << score_or(scores, "Zoe", -1) << '\n';
    std::cout << scores.size() << '\n';
}
