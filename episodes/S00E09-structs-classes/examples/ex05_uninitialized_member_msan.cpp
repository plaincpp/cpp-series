// example: ex05_uninitialized_member_msan
// purpose: Show that a member with no initializer has no value, and MemorySanitizer reports the read.
// expect: ub
// expect-match: use-of-uninitialized-value
// sanitizer: memory
// compilers: clang
// in-video: yes
#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p;
    p.y = 4;
    std::cout << p.x + p.y << '\n';
}
