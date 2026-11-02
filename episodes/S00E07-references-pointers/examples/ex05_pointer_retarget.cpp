// example: ex05_pointer_retarget
// purpose: Show that an assignment to a pointer changes its target, and the old target keeps its value.
// expect: ok
#include <iostream>

int main() {
    int first = 1;
    int second = 2;
    int* ptr = &first;
    *ptr = 10;
    ptr = &second;
    *ptr = 20;
    std::cout << first << ' ' << second << ' ' << *ptr << '\n';
}
