// example: ex26_hidden_dangling_pointer_ub
// purpose: Show a dangling pointer that gives no compiler warning, and AddressSanitizer finds the read.
// expect: ub
// expect-match: stack-use-after-return
#include <iostream>

int* keep_copy(int value) {
    int copy = value;
    int* result = &copy;
    return result;
}

int main() {
    int* ptr = keep_copy(7);
    std::cout << *ptr << '\n';
}
