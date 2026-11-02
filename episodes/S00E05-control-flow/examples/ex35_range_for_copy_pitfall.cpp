// example: ex35_range_for_copy_pitfall
// purpose: Show that a range-for variable by value is a copy. Use a reference to change the elements.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int prices[] = {10, 20, 30};
    for (int price : prices) {
        price *= 2;
    }
    std::cout << prices[0] << '\n';
    for (int& price : prices) {
        price *= 2;
    }
    std::cout << prices[0] << '\n';
}
