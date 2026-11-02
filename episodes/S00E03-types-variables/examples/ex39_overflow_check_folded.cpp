// example: ex39_overflow_check_folded
// purpose: Show that GCC and Clang with -O2 change the check x + 1 > x to true; capture.sh keeps the assembly.
// expect: ok
#include <iostream>

bool next_is_larger(int x) {
    return x + 1 > x;
}

int main() {
    std::cout << std::boolalpha << next_is_larger(41) << '\n';
}
