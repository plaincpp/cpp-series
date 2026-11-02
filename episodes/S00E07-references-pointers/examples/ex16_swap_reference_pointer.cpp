// example: ex16_swap_reference_pointer
// purpose: Compare a swap with reference parameters and a swap with pointer parameters.
// expect: ok
#include <iostream>

void swap_by_reference(int& a, int& b) {
    int old_a = a;
    a = b;
    b = old_a;
}

void swap_by_pointer(int* a, int* b) {
    int old_a = *a;
    *a = *b;
    *b = old_a;
}

int main() {
    int x = 1;
    int y = 2;
    swap_by_reference(x, y);
    std::cout << x << ' ' << y << '\n';
    swap_by_pointer(&x, &y);
    std::cout << x << ' ' << y << '\n';
}
