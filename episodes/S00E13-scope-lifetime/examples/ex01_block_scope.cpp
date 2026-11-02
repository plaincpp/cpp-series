// example: ex01_block_scope
// purpose: Show that a name in a block is visible only from its declaration to the end of the block.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int total = 10;
    {
        int bonus = 5;
        total += bonus;
        std::cout << "inside: " << total << '\n';
    }
    std::cout << "outside: " << total << '\n';
}
