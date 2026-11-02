// example: ex14_variable_in_header_pitfall
// purpose: Show that a global variable defined in a header gives a multiple definition.
// expect: link-error
// expect-match: multiple definition of `request_count'
#include <iostream>
#include "counter.h"
#include "log.h"

int main() {
    log_request();
    log_request();
    std::cout << "requests: " << request_count << '\n';
}
