// example: ex13_static_helper
// purpose: Show that two files can each have a static function with the same name.
// expect: ok
#include <iostream>
#include "shop.h"

int main() {
    std::cout << "price: " << price(50) << '\n';
    std::cout << "tax: " << tax(50) << '\n';
}
