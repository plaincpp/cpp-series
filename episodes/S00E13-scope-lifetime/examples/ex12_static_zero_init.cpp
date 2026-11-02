// example: ex12_static_zero_init
// purpose: Show that a variable with static storage duration and no initializer starts at zero.
// expect: ok
#include <iostream>

int error_count;

int next_id() {
    static int id;
    return ++id;
}

int main() {
    std::cout << error_count << '\n';
    std::cout << next_id() << ' ' << next_id() << '\n';
}
