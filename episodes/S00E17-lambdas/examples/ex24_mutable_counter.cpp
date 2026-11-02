// example: ex24_mutable_counter
// purpose: Use a mutable lambda that keeps a counter, and show that a copy has its own counter.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    auto next_id = [id = 0]() mutable { return ++id; };
    std::cout << next_id() << '\n';
    std::cout << next_id() << '\n';
    auto copy = next_id;
    std::cout << copy() << '\n';
    std::cout << next_id() << '\n';
}
