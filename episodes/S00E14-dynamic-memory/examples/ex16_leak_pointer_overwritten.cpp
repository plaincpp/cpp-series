// example: ex16_leak_pointer_overwritten
// purpose: Show that a new value in the only pointer to a heap object makes a leak.
// expect: sanitizer
// expect-match: detected memory leaks
#include <iostream>
int main() {
    int* score = new int{1};
    score = new int{2};
    std::cout << *score << '\n';
    delete score;
}
