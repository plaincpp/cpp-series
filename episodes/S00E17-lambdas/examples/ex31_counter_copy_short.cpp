// example: ex31_counter_copy_short
// purpose: Show in a Short that a copy of a mutable lambda has its own counter.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    auto next = [id = 0]() mutable {
        return ++id;
    };
    next();
    auto copy = next;
    std::cout << next() << ' ';
    std::cout << copy() << '\n';
}
