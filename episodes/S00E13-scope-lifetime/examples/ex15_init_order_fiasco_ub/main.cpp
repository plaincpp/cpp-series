// example: ex15_init_order_fiasco_ub
// purpose: Show that a global in one file can use a global of another file before it starts.
// in-video: yes
// expect: ub
// expect-match: initialization-order-fiasco
#include <iostream>
#include <string>

extern std::string greeting;

int main() {
    std::cout << greeting << '\n';
}
