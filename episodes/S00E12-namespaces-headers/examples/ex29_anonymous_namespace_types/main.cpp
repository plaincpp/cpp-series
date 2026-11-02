// example: ex29_anonymous_namespace_types
// purpose: Use an anonymous namespace so that two source files can each define a class named Line.
// expect: ok
#include <iostream>
#include "discount.h"
#include "invoice.h"

int main() {
    std::cout << invoice_total() << '\n';
    std::cout << best_discount() << '\n';
}
