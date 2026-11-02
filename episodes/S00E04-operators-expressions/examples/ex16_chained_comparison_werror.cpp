// example: ex16_chained_comparison_werror
// purpose: Show that -Wall finds a chained comparison, and -Werror stops the build.
// expect: compile-error
// expect-match: mathematical meaning
// flags: -Werror
#include <iostream>

int main() {
    int low = 1;
    int value = 9;
    int high = 5;
    std::cout << (low < value < high) << '\n';
}
