// example: ex16_include_guard
// purpose: Use an include guard so that a second include of a header adds no text.
// expect: ok
#include <iostream>
#include "point.h"
#include "line.h"

int main() {
    Line line{{1, 2}, {4, 2}};
    std::cout << "length: " << line.end.x - line.start.x << '\n';
}
