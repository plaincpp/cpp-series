// example: ex12_public_include_dir
// purpose: Use a PUBLIC include folder, so that each target that links to the library finds its header.
// expect: ok
// flags: -I/ep/examples/ex12_public_include_dir/include
#include "geometry.h"
#include <iostream>

int main() {
    std::cout << "area: " << geometry::area(3, 4) << '\n';
}
