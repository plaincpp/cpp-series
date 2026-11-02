// example: ex10_static_not_captured
// purpose: Show that a lambda uses global and static variables directly, without a copy.
// expect: ok
#include <iostream>

int global_count = 1;

int main() {
    static int static_count = 1;
    int local_count = 1;
    auto read = [=]() {
        return global_count * 100 + static_count * 10 + local_count;
    };
    global_count = 2;
    static_count = 2;
    local_count = 2;
    std::cout << read() << '\n';
}
