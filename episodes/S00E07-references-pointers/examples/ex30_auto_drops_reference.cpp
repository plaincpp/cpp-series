// example: ex30_auto_drops_reference
// purpose: Show that auto makes a copy from a reference, and auto& makes a new reference.
// expect: ok
#include <iostream>

int main() {
    int score = 10;
    int& ref = score;
    auto copy = ref;
    auto& alias = ref;
    copy = 20;
    alias = 30;
    std::cout << score << ' ' << copy << '\n';
}
