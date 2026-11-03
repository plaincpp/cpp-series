// example: ex08_self_move_check
// purpose: Use a self check in the move assignment, so a move to itself keeps the value.
// expect: ok
// stdin: 2
// in-video: yes
#include "box.h"
#include <iostream>
#include <utility>
int main() {
    Box boxes[] = {Box{1}, Box{2}, Box{3}};
    int i = 0;
    std::cin >> i;
    boxes[i] = std::move(boxes[2]);
    std::cout << *boxes[i].value << '\n';
}
