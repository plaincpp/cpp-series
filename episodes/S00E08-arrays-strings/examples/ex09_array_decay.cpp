// example: ex09_array_decay
// purpose: Show that an array name converts to a pointer to its first element.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    int* first = scores;
    std::cout << std::boolalpha;
    std::cout << (first == &scores[0]) << '\n';
    std::cout << first[2] << ' ' << *(first + 2) << '\n';
    std::cout << sizeof(scores) << ' ' << sizeof(first) << '\n';
}
