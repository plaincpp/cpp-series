// example: ex03_array_contiguous
// purpose: Show that the elements of an array are next to each other in memory.
// expect: ok
// in-video: no
#include <iostream>

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    int* first = &scores[0];
    int* fourth = &scores[3];
    std::cout << (fourth - first) << '\n';
    std::cout << std::boolalpha;
    std::cout << (fourth == first + 3) << '\n';
    std::cout << *(first + 3) << '\n';
}
