// example: ex15_uninitialized_warning
// purpose: Show that -Wall finds a read of an uninitialized int (-Werror makes it an error).
// expect: compile-error
// expect-match: uninitialized
// flags: -Werror
// in-video: yes
#include <iostream>

int main() {
    int total;
    total += 5;
    std::cout << total << '\n';
}
