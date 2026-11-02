// example: ex06_average_pitfall
// purpose: Show that int / int loses the fraction before the result goes into a double.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int total = 7;
    int count = 2;
    double wrong = total / count;
    double right = static_cast<double>(total) / count;
    std::cout << wrong << '\n';
    std::cout << right << '\n';
}
