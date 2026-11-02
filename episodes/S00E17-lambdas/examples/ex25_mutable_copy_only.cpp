// example: ex25_mutable_copy_only
// purpose: Show that a mutable lambda changes its own copy, not the original variable.
// expect: ok
#include <iostream>

int main() {
    int count = 0;
    auto add = [count]() mutable {
        count += 10;
        return count;
    };
    std::cout << add() << '\n';
    std::cout << add() << '\n';
    std::cout << count << '\n';
}
