// example: ex17_pragma_once
// purpose: Use #pragma once as a shorter guard against a second include.
// expect: ok
#include <iostream>
#include "point.h"
#include "line.h"

int main() {
    Line line{{1, 2}, {4, 2}};
    std::cout << "length: " << line.end.x - line.start.x << '\n';
}
