// example: ex19_double_delete_ub
// purpose: Show that a second delete of the same object is undefined behavior, and AddressSanitizer reports a double free.
// expect: ub
// expect-match: attempting double-free
// in-video: yes
#include <iostream>
int main() {
    int* score = new int{90};
    int* backup = score;
    std::cout << *backup << '\n';
    delete score;
    delete backup;
}
