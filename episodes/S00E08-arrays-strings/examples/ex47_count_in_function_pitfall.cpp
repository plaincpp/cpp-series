// example: ex47_count_in_function_pitfall
// purpose: Show that the sizeof count formula gives 2, not 5, inside a function with an array parameter.
// expect: ok
#include <iostream>

int count_of(int values[5]) {
    return sizeof(values) / sizeof(values[0]);
}

int main() {
    int scores[5] = {90, 85, 77, 60, 95};
    std::cout << sizeof(scores) / sizeof(scores[0]) << '\n';
    std::cout << count_of(scores) << '\n';
}
