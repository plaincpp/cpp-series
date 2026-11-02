// example: ex24_glibcxx_assertions
// purpose: Show that -D_GLIBCXX_ASSERTIONS makes libstdc++ check the index of operator[] and stop.
// expect: runtime-error
// expect-match: __n < this->size()
// flags: -D_GLIBCXX_ASSERTIONS
// stdin: 5
#include <array>
#include <iostream>

int main() {
    std::array<int, 5> scores{90, 85, 77, 60, 95};
    int index = 0;
    std::cin >> index;
    std::cout << scores[index] << '\n';
}
