// example: ex27_helper_clash_link_error
// purpose: Show that two source files with the same helper function do not link.
// expect: link-error
// expect-match: multiple definition of `scale(int)'
// in-video: yes
#include <iostream>
#include "discount.h"
#include "invoice.h"

int main() {
    std::cout << invoice_cents(12) << '\n';
    std::cout << discount(1200) << '\n';
}
