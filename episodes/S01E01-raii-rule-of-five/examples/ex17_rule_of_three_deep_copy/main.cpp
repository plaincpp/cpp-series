// example: ex17_rule_of_three_deep_copy
// purpose: Write the copy constructor and the copy assignment, so that each copy owns its own array.
// expect: ok
// in-video: yes
#include <iostream>
#include "buffer.h"
int main() {
    Buffer a{3};
    a[0] = 7;
    Buffer b = a;
    Buffer c{1};
    c = a;
    a[0] = 9;
    std::cout << a[0] << ' ' << b[0] << ' ' << c[0] << '\n';
}
