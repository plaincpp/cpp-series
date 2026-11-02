// example: ex20_use_after_delete_ub
// purpose: Show that a read through a pointer after delete is undefined behavior, and AddressSanitizer reports it.
// expect: ub
// expect-match: heap-use-after-free
// in-video: yes
#include <iostream>
int main() {
    int* score = new int{90};
    delete score;
    std::cout << *score << '\n';
}
