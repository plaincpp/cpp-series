// example: ex35_at_partial_output
// purpose: Show that output before a throwing at() call in one statement is already written.
// expect: ok
#include <iostream>
#include <map>
#include <stdexcept>
#include <string>

int main() {
    std::map<std::string, int> scores{{"Ali", 90}};
    try {
        std::cout << "Zoe: " << scores.at("Zoe") << '\n';
    } catch (const std::out_of_range&) {
        std::cout << "(no key)\n";
    }
}
