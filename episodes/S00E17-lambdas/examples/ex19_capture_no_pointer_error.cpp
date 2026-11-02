// example: ex19_capture_no_pointer_error
// purpose: Show that a lambda with a capture does not convert to a function pointer.
// expect: compile-error
// expect-match: int (*)(int)
#include <iostream>

int main() {
    int factor = 3;
    int (*scale)(int) = [factor](int x) { return x * factor; };
    std::cout << scale(5) << '\n';
}
