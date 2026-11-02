// example: ex38_range_for_index_init
// purpose: Use a range-for loop with an init statement (C++20) to count the position.
// expect: ok
#include <iostream>

int main() {
    int scores[] = {70, 85, 90};
    for (int i = 0; int score : scores) {
        std::cout << i << ": " << score << '\n';
        ++i;
    }
}
