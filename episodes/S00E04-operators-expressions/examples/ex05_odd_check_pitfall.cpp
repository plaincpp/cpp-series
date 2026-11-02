// example: ex05_odd_check_pitfall
// purpose: Show that n % 2 == 1 is false for a negative odd number, and use n % 2 != 0.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int number = -3;
    std::cout << std::boolalpha;
    std::cout << (number % 2 == 1) << '\n';
    std::cout << (number % 2 != 0) << '\n';
}
