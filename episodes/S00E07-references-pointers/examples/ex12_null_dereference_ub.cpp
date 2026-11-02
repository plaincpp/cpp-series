// example: ex12_null_dereference_ub
// purpose: Show that a dereference of a null pointer is undefined behavior, and UBSan reports it.
// expect: ub
// expect-match: null pointer
// stdin: 0
// in-video: yes
#include <iostream>

int main() {
    int has_score = 0;
    std::cin >> has_score;
    int points = 42;
    int* score = has_score ? &points : nullptr;
    std::cout << *score << '\n';
}
