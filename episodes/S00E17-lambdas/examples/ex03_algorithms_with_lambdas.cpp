// example: ex03_algorithms_with_lambdas
// purpose: Use lambdas with std::sort, std::count_if and std::find_if on a vector of words.
// expect: ok
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> words{"banana", "fig", "kiwi", "apple"};
    std::sort(words.begin(), words.end(),
        [](const std::string& a, const std::string& b) {
            return a.size() < b.size();
        });
    for (const std::string& word : words) {
        std::cout << word << ' ';
    }
    std::cout << '\n';
    auto long_words = std::count_if(words.begin(), words.end(),
        [](const std::string& w) { return w.size() > 4; });
    std::cout << "long words: " << long_words << '\n';
    auto it = std::find_if(words.begin(), words.end(),
        [](const std::string& w) { return w.front() == 'k'; });
    std::cout << "first with k: " << *it << '\n';
}
