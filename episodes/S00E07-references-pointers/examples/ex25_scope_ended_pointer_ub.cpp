// example: ex25_scope_ended_pointer_ub
// purpose: Show that a pointer to a variable after the end of its block dangles, and AddressSanitizer finds the read.
// expect: ub
// expect-match: stack-use-after-scope
#include <iostream>

int main() {
    int* ptr = nullptr;
    {
        int score = 42;
        ptr = &score;
    }
    std::cout << *ptr << '\n';
}
