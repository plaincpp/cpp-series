// example: ex06_integer_average
// purpose: Show that int divided by int gives an int before the result goes into a double.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int total = 7;
    int count = 2;
    double average = total / count;
    std::cout << average << '\n';
    std::cout << total / 2.0 << '\n';
}
