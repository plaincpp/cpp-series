// example: ex05_template_in_cpp_link_error
// purpose: Show that a template body in a .cpp file gives an undefined reference at link time.
// expect: link-error
// expect-match: undefined reference to `int larger<int>(int, int)'
#include <iostream>
#include "larger.h"
int main() {
    std::cout << larger(3, 7) << '\n';
}
