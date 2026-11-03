// example: ex06_move_assignment
// purpose: Write a move assignment that deletes the old block and takes the block of the source.
// expect: ok
// in-video: yes
#include "box.h"
#include <iostream>
#include <utility>
int main() {
    Box a{7};
    Box b{9};
    b = std::move(a);
    std::cout << *b.value << ' ';
    std::cout << (a.value == nullptr) << '\n';
}
