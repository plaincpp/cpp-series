// example: ex13_delete_stack_object_ub
// purpose: Show that delete on the address of a local variable is undefined behavior, and AddressSanitizer reports it.
// expect: ub
// expect-match: not malloc()-ed
#include <iostream>
int main() {
    int score = 90;
    int* address = &score;
    std::cout << *address << '\n';
    delete address;
}
