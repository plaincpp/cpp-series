// example: ex19_unsigned_wrap
// purpose: Show that unsigned int arithmetic wraps around modulo 2 to the power 32 on x86-64 Linux.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    unsigned int items = 0;
    items = items - 1;
    std::cout << items << '\n';
    items = items + 1;
    std::cout << items << '\n';
}
