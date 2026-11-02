// example: ex04_shadowing_pitfall
// purpose: Show that an inner variable with the same name hides the outer variable.
// in-video: yes
// expect: ok
#include <iostream>

int main() {
    int total = 0;
    int prices[] = {3, 4, 5};
    for (int price : prices) {
        int total = 0;
        total += price;
        std::cout << "inner: " << total << '\n';
    }
    std::cout << "total: " << total << '\n';
}
