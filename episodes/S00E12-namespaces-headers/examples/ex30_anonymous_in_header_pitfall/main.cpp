// example: ex30_anonymous_in_header_pitfall
// purpose: Show that an anonymous namespace in a header gives each source file its own variable.
// expect: ok
// in-video: yes
#include <iostream>
#include "counter.h"
#include "log.h"

int main() {
    log_hit();
    log_hit();
    ++hits;
    std::cout << "main: " << hits << '\n';
    std::cout << "log: " << log_hits() << '\n';
}
