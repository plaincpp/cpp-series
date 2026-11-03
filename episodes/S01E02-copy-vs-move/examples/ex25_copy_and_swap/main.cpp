// example: ex25_copy_and_swap
// purpose: Use one assignment operator that takes its parameter by value for both copy and move.
// expect: ok
// in-video: yes
#include "box.h"
#include <iostream>
#include <utility>
int main() {
    Box a{7};
    Box b{9};
    Box c{5};
    b = a;
    c = std::move(a);
    std::cout << *b.value << ' ' << *c.value << '\n';
}
