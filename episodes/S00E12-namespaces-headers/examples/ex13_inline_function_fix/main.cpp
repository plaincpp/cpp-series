// example: ex13_inline_function_fix
// purpose: Use inline so that two source files can include a function definition.
// expect: ok
// in-video: yes
#include <iostream>
#include "cart.h"
#include "tax.h"

int main() {
    std::cout << add_tax(1000) << '\n';
    std::cout << cart_total(300, 200) << '\n';
}
