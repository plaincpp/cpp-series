// example: ex22_at_uncaught_terminate
// purpose: Show that an at() exception with no catch stops the program with std::terminate.
// expect: runtime-error
// expect-match: std::out_of_range
// stdin: 7
#include <array>
#include <iostream>

int main() {
    std::array<int, 5> scores{90, 85, 77, 60, 95};
    int index = 0;
    std::cin >> index;
    std::cout << scores.at(index) << '\n';
}
