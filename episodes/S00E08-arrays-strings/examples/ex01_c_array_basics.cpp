// example: ex01_c_array_basics
// purpose: Show a C array of five int values, index 0 to 4, and its size in bytes.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    scores[0] = 100;
    std::cout << scores[0] << ' ' << scores[4] << '\n';
    std::cout << sizeof(scores) << '\n';
    std::cout << sizeof(scores) / sizeof(scores[0]) << '\n';
}
