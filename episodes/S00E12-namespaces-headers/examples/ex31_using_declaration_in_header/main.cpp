// example: ex31_using_declaration_in_header
// purpose: Show that a using-declaration in a header also changes each file that includes the header.
// expect: compile-error
// expect-match: size'
#include <iostream>
#include "stats.h"

int size = 3;

int main() {
    std::cout << size << '\n';
}
