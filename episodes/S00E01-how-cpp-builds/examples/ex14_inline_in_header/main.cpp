// example: ex14_inline_in_header
// purpose: Use inline to define a function and a variable in a header that two files include.
// expect: ok
#include <iostream>
#include "counter.h"
#include "worker.h"

int main() {
    count_call();
    work();
    std::cout << "calls: " << call_count << '\n';
}
