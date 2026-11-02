// example: ex10_pragma_once
// purpose: Use #pragma once so that a second include of a header adds no text.
// expect: ok
#include <iostream>
#include "money.h"
#include "price.h"

int main() {
    Money price{1000};
    Money total = add_tax(price);
    std::cout << total.cents << '\n';
}
