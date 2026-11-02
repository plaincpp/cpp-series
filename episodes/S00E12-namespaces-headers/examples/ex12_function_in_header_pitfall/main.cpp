// example: ex12_function_in_header_pitfall
// purpose: Show that an include guard does not stop a multiple definition at link time.
// expect: link-error
// expect-match: multiple definition of `add_tax(int)'
// in-video: yes
#include <iostream>
#include "cart.h"
#include "tax.h"

int main() {
    std::cout << add_tax(1000) << '\n';
    std::cout << cart_total(300, 200) << '\n';
}
