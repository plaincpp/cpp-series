// example: ex07_out_of_bounds_ub
// purpose: Show that an index past the end of a C array is undefined behavior that a sanitizer finds.
// expect: ub
// expect-match: out of bounds
// stdin: 5
// in-video: yes
#include <iostream>

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    int index = 0;
    std::cin >> index;
    std::cout << scores[index] << '\n';
}
