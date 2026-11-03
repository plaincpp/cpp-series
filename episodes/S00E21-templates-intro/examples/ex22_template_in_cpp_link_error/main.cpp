// example: ex22_template_in_cpp_link_error
// purpose: Show that a template body in a .cpp file gives an undefined reference, because main.cpp cannot make max_of of int.
// expect: link-error
// expect-match: undefined reference to `int max_of<int>(int, int)'
// in-video: yes
#include <iostream>
#include "max.h"
int main() {
    std::cout << max_of(3, 7) << '\n';
}
