// example: ex06_compare_pointers_values
// purpose: Compare two pointers (the addresses) and the two objects that they point to (the values).
// expect: ok
#include <iostream>

int main() {
    int a = 7;
    int b = 7;
    int* p = &a;
    int* q = &b;
    int* r = &a;
    std::cout << std::boolalpha;
    std::cout << (p == q) << ' ' << (*p == *q) << ' ' << (p == r) << '\n';
}
