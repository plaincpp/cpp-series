// example: ex08_not_captured_error
// purpose: Show that a lambda cannot use a local variable that it does not capture.
// expect: compile-error
// expect-match: captured
// in-video: yes
#include <iostream>

int main() {
    int limit = 10;
    auto above = [](int x) { return x > limit; };
    std::cout << above(50) << '\n';
}
