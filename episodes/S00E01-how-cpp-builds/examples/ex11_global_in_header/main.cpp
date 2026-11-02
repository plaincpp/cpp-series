// example: ex11_global_in_header
// purpose: Show that a global variable defined in a header gives a multiple definition.
// expect: link-error
// expect-match: multiple definition of `max_users'
#include <iostream>
#include "admin.h"
#include "config.h"

int main() {
    raise_limit();
    std::cout << max_users << '\n';
}
