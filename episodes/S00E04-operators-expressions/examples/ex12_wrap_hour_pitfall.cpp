// example: ex12_wrap_hour_pitfall
// purpose: Show that % gives a negative result for a negative value, and correct it with + 24.
// expect: ok
#include <iostream>

int main() {
    int hour = 2;
    int back = 5;
    std::cout << (hour - back) % 24 << '\n';
    std::cout << ((hour - back) % 24 + 24) % 24 << '\n';
}
