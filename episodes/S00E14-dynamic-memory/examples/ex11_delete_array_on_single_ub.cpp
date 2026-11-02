// example: ex11_delete_array_on_single_ub
// purpose: Show that delete[] on memory from new is undefined behavior, and AddressSanitizer reports the mismatch.
// expect: ub
// expect-match: alloc-dealloc-mismatch
#include <iostream>
int main() {
    int* score = new int{90};
    std::cout << *score << '\n';
    delete[] score;
}
