// example: ex23_brackets_out_of_range_ub
// purpose: Show that operator[] on std::array does not check the index, so a bad index is undefined behavior.
// expect: ub
// expect-match: stack-buffer-overflow
// stdin: 5
// in-video: yes
#include <array>
#include <iostream>

int main() {
    std::array<int, 5> scores{90, 85, 77, 60, 95};
    int index = 0;
    std::cin >> index;
    std::cout << scores[index] << '\n';
}
