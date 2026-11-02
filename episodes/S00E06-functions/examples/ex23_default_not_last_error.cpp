// example: ex23_default_not_last_error
// purpose: Show that each parameter after a default argument must also have a default argument.
// expect: compile-error
// expect-match: default argument
#include <iostream>
#include <string>

void draw_line(int width = 8, char fill) {
    std::cout << std::string(width, fill) << '\n';
}

int main() {
    draw_line(4, '=');
}
