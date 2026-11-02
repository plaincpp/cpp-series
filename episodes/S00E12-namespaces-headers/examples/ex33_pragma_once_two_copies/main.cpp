// example: ex33_pragma_once_two_copies
// purpose: Show that pragma once does not stop a copy of a header in a different folder.
// expect: compile-error
// expect-match: redefinition of 'Money'
// compilers: clang
#include <iostream>
#include "billing/money.h"
#include "shop/money.h"

int main() {
    Money price{1200};
    std::cout << price.cents << '\n';
}
