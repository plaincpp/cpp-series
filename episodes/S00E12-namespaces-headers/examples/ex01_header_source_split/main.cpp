// example: ex01_header_source_split
// purpose: Use a header for the declaration and a source file for the definition.
// expect: ok
// in-video: yes
#include <iostream>
#include "convert.h"

int main() {
    std::cout << "90 min = " << to_seconds(90) << " s\n";
}
