// example: ex10_delete_mismatch_ub
// purpose: Show that delete on memory from new[] is undefined behavior, and AddressSanitizer reports the mismatch.
// expect: ub
// expect-match: alloc-dealloc-mismatch
// stdin: 4
// in-video: yes
#include <cstddef>
#include <iostream>
int main() {
    std::size_t count = 0;
    std::cin >> count;
    int* scores = new int[count]{};
    std::cout << scores[0] << '\n';
    delete scores;
}
