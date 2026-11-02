// example: ex18_std_array_parameter
// purpose: Show that a std::array parameter keeps its size, and that pass by value makes a copy.
// expect: ok
#include <array>
#include <iostream>

void reset_copy(std::array<int, 5> values) {
    values[0] = 0;
}

void print_info(const std::array<int, 5>& values) {
    std::cout << values.size() << ' ' << sizeof(values) << '\n';
}

int main() {
    std::array<int, 5> scores{90, 85, 77, 60, 95};
    reset_copy(scores);
    std::cout << scores[0] << '\n';
    print_info(scores);
}
