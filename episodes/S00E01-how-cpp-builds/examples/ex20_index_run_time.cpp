// example: ex20_index_run_time
// purpose: Show that a bad index from input passes the build and stops the program at run time.
// expect: runtime-error
// expect-match: std::out_of_range
// stdin: 5
#include <array>
#include <cstddef>
#include <iostream>

int main() {
    std::array<int, 3> scores{90, 75, 60};
    std::size_t index = 0;
    std::cin >> index;
    std::cout << scores.at(index) << '\n';
}
