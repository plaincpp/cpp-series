// example: ex15_inline_variable
// purpose: Use an inline variable so that all source files share one object.
// expect: ok
// in-video: yes
#include <iostream>
#include "counter.h"
#include "log.h"

int main() {
    log_request();
    log_request();
    std::cout << "requests: " << request_count << '\n';
}
