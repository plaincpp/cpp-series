// example: ex07_self_move_ub
// purpose: Show that a move assignment without a self check reads a deleted block when it moves to itself.
// expect: ub
// expect-match: heap-use-after-free
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
