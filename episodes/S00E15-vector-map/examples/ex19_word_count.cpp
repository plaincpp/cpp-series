// example: ex19_word_count
// purpose: Use ++counts[word] to count words, a correct use of map operator[].
// expect: ok
// stdin: the cat and the hat and the end
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> counts;
    std::string word;
    while (std::cin >> word) {
        ++counts[word];
    }
    for (const auto& [text, count] : counts) {
        std::cout << text << ' ' << count << '\n';
    }
}
