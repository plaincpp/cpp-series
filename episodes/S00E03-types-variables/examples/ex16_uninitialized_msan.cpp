// example: ex16_uninitialized_msan
// purpose: Show that MemorySanitizer (Clang) reports the uninitialized read of ex15 at run time.
// expect: ub
// expect-match: use-of-uninitialized-value
// sanitizer: memory
// compilers: clang
#include <iostream>

int main() {
    int total;
    total += 5;
    std::cout << total << '\n';
}
