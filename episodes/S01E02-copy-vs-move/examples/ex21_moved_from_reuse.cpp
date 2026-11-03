// example: ex21_moved_from_reuse
// purpose: Use a moved-from string again after an assignment or a clear.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>
#include <utility>
#include <vector>
int main() {
    std::string line = "first line of the log file";
    std::vector<std::string> lines;
    lines.push_back(std::move(line));
    line = "second line";
    lines.push_back(std::move(line));
    line.clear();
    std::cout << lines.size() << ' ' << lines[1] << '\n';
    std::cout << line.empty() << '\n';
}
