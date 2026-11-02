// example: ex13_specific_first
// purpose: Put the most specific handler first, so std::out_of_range goes to its own handler.
// expect: ok
// in-video: yes
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
    std::vector<int> scores{90, 85};
    try {
        std::cout << scores.at(5) << '\n';
    } catch (const std::out_of_range&) {
        std::cout << "out_of_range\n";
    } catch (const std::exception&) {
        std::cout << "exception\n";
    }
}
