// example: ex24_explicit_instantiation
// purpose: Use an explicit instantiation in the .cpp file, so that max_of of int and of double link without the body in the header.
// expect: ok
// in-video: no
#include <iostream>
#include "max.h"
int main() {
    std::cout << max_of(3, 7) << '\n';
    std::cout << max_of(2.5, 1.5) << '\n';
}
