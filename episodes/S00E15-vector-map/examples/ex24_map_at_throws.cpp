// example: ex24_map_at_throws
// purpose: Show that at() reads a const map and throws std::out_of_range for a missing key.
// expect: ok
#include <iostream>
#include <map>
#include <stdexcept>
#include <string>

void print_score(const std::map<std::string, int>& scores, const std::string& name) {
    try {
        int score = scores.at(name);
        std::cout << name << ": " << score << '\n';
    } catch (const std::out_of_range&) {
        std::cout << "no key " << name << '\n';
    }
}

int main() {
    std::map<std::string, int> scores{{"Ali", 90}};
    print_score(scores, "Ali");
    print_score(scores, "Zoe");
    std::cout << scores.size() << '\n';
}
