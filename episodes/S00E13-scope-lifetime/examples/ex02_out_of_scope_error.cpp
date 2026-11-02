// example: ex02_out_of_scope_error
// purpose: Show that the compiler rejects a name after the end of its block.
// expect: compile-error
// expect-match: bonus
// in-video: yes
#include <iostream>

int main() {
    int total = 10;
    {
        int bonus = 5;
        total += bonus;
    }
    std::cout << total + bonus << '\n';
}
