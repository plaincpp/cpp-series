// example: ex28_anonymous_namespace_fix
// purpose: Use an anonymous namespace so that each source file keeps its own helper.
// expect: ok
// in-video: yes
#include <iostream>
#include "discount.h"
#include "invoice.h"

int main() {
    std::cout << invoice_cents(12) << '\n';
    std::cout << discount(1200) << '\n';
}
