// example: ex20_signed_overflow_ub
// purpose: Show that signed int overflow is undefined behavior, found by UBSan.
// expect: ub
// expect-match: signed integer overflow
// stdin: 2147483647
// in-video: yes
#include <iostream>

int main() {
    int count = 0;
    std::cin >> count;
    count = count + 1;
    std::cout << count << '\n';
}
