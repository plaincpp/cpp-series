// example: ex32_guard_two_copies
// purpose: Show that one guard name stops a second copy of a header from a different folder.
// expect: ok
#include <iostream>
#include "billing/money.h"
#include "shop/money.h"

int main() {
    Money price{1200};
    std::cout << price.cents << '\n';
}
