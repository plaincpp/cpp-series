// example: ex23_sign_compare_werror
// purpose: Show that the compiler finds a signed and unsigned comparison, and -Werror stops the build.
// expect: compile-error
// expect-match: different sign
// flags: -Werror
#include <iostream>

int main() {
    int balance = -1;
    unsigned int limit = 1;
    std::cout << (balance < limit) << '\n';
}
