// example: ex22_typo_first_error
// purpose: Show that the first error can name a line after the mistake, and that its hint points to the cause.
// expect: compile-error
// expect-match: did you mean 'totl'
#include <iostream>

int main() {
    int totl = 0;
    total += 2;
    total += 3;
    std::cout << total << '\n';
}
