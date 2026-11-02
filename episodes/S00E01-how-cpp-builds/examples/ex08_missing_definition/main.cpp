// example: ex08_missing_definition
// purpose: Show that a declared function with no definition compiles but does not link.
// expect: link-error
// expect-match: undefined reference to `add(int, int)'
// in-video: yes
#include <iostream>
#include "util.h"

int main() {
    std::cout << add(2, 3) << '\n';
}
