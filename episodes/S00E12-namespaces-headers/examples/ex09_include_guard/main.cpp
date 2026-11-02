// example: ex09_include_guard
// purpose: Use an include guard so that a second include of a header adds no text.
// expect: ok
// in-video: yes
#include <iostream>
#include "money.h"
#include "price.h"

int main() {
    Money price{1000};
    Money total = add_tax(price);
    std::cout << total.cents << '\n';
}
