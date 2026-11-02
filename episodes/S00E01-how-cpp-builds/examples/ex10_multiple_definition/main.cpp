// example: ex10_multiple_definition
// purpose: Show that a function body in a header gives a multiple definition at link time.
// expect: link-error
// expect-match: multiple definition of `add(int, int)'
// in-video: yes
#include <iostream>
#include "stats.h"
#include "util.h"

int main() {
    std::cout << add(2, 3) << ' ' << sum3(1, 2, 3) << '\n';
}
