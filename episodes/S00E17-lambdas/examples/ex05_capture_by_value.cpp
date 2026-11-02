// example: ex05_capture_by_value
// purpose: Show that a capture by value copies the variable when the lambda is made.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int limit = 10;
    auto above = [limit](int x) { return x > limit; };
    limit = 100;
    std::cout << std::boolalpha;
    std::cout << above(50) << '\n';
    std::cout << limit << '\n';
}
