// example: ex15_missing_guard_pitfall
// purpose: Show that a header with no guard, included two times, gives a redefinition error.
// expect: compile-error
// expect-match: redefinition of
#include <iostream>
#include "point.h"
#include "line.h"

int main() {
    Line line{{1, 2}, {4, 2}};
    std::cout << "length: " << line.end.x - line.start.x << '\n';
}
