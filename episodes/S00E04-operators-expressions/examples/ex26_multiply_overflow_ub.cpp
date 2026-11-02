// example: ex26_multiply_overflow_ub
// purpose: Show that int * int overflows before the result goes into a long long.
// expect: ub
// expect-match: signed integer overflow
// stdin: 50000
// in-video: yes
#include <iostream>

int main() {
    int width = 0;
    std::cin >> width;
    long long area = width * width;
    std::cout << area << '\n';
}
