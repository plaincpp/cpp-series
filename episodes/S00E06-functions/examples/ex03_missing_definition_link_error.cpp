// example: ex03_missing_definition_link_error
// purpose: Show that a declaration with no definition compiles, but the linker stops.
// expect: link-error
// expect-match: undefined reference to `square(int)'
// in-video: yes
#include <iostream>

int square(int value);

int main() {
    std::cout << square(7) << '\n';
}
