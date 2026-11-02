// example: ex15_emplace_back
// purpose: Use emplace_back to make an element in place from constructor arguments.
// expect: ok
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::vector<std::string> lines;
    lines.push_back(std::string(3, '*'));
    lines.emplace_back(5, '-');
    lines.emplace_back("end");
    for (const std::string& line : lines) {
        std::cout << line << '\n';
    }
}
