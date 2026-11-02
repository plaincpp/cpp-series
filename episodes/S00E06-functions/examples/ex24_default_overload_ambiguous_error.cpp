// example: ex24_default_overload_ambiguous_error
// purpose: Show that an overload and a default argument can make the same call ambiguous.
// expect: compile-error
// expect-match: ambiguous
#include <iostream>
#include <string>

void draw_line(int width) {
    std::cout << std::string(width, '*') << '\n';
}

void draw_line(int width, char fill = '=') {
    std::cout << std::string(width, fill) << '\n';
}

int main() {
    draw_line(4);
}
