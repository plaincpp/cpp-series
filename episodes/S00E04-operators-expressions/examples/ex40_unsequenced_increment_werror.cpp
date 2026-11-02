// example: ex40_unsequenced_increment_werror
// purpose: Show that count++ + count++ is undefined behavior, and that -Wall finds it.
// expect: compile-error
// expect-match: 'count'
// flags: -Werror
// in-video: yes
#include <iostream>

int main() {
    int count = 1;
    int total = count++ + count++;
    std::cout << total << '\n';
}
