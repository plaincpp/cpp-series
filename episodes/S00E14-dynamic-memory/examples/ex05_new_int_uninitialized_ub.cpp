// example: ex05_new_int_uninitialized_ub
// purpose: Show that new int without an initializer gives an indeterminate value, and MemorySanitizer finds the read.
// expect: ub
// expect-match: use-of-uninitialized-value
// sanitizer: memory
// compilers: clang
// in-video: yes
#include <iostream>
int main() {
    int* score = new int;
    if (*score > 50) {
        std::cout << "pass\n";
    }
    delete score;
}
