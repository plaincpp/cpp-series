// example: ex30_assign_in_condition_werror
// purpose: Show that -Wall finds = in an if condition, and -Werror stops the build.
// expect: compile-error
// expect-match: parentheses
// flags: -Werror
#include <iostream>

int main() {
    int errors = 0;
    if (errors = 3) {
        std::cout << "build failed\n";
    }
}
