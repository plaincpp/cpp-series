// example: ex49_overflow_test_folded
// purpose: Show that with -O2 the compiler folds x + 1 > x to true, because signed overflow is undefined behavior.
// expect: ok
// in-video: no
#include <iostream>

bool will_grow(int x) {
    return x + 1 > x;
}

int main() {
    std::cout << std::boolalpha << will_grow(5) << '\n';
}
