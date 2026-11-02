// example: ex22_null_copy_still_dangles_ub
// purpose: Show that nullptr in one pointer does not change a copy, so the copy still dangles.
// expect: ub
// expect-match: heap-use-after-free
#include <iostream>
int main() {
    int* score = new int{90};
    int* backup = score;
    delete score;
    score = nullptr;
    std::cout << *backup << '\n';
}
