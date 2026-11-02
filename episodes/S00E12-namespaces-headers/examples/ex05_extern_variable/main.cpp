// example: ex05_extern_variable
// purpose: Declare a global variable with extern in a header and define it in one source file.
// expect: ok
#include <iostream>
#include "counter.h"
#include "log.h"

int main() {
    log_request();
    log_request();
    std::cout << "requests: " << request_count << '\n';
}
