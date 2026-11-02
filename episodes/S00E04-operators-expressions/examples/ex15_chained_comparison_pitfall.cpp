// example: ex15_chained_comparison_pitfall
// purpose: Show that low < value < high does not test a range, and use && for the range test.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int low = 1;
    int value = 9;
    int high = 5;
    std::cout << std::boolalpha;
    std::cout << (low < value < high) << '\n';
    std::cout << (low < value && value < high) << '\n';
}
