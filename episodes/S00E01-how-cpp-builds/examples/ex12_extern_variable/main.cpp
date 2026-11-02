// example: ex12_extern_variable
// purpose: Use extern in a header to share one global variable between two files.
// expect: ok
#include <iostream>
#include "admin.h"
#include "config.h"

int main() {
    std::cout << max_users << '\n';
    raise_limit();
    std::cout << max_users << '\n';
}
