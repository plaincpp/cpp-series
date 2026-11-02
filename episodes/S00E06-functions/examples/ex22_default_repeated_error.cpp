// example: ex22_default_repeated_error
// purpose: Show that a default argument in the declaration and again in the definition does not compile.
// expect: compile-error
// expect-match: default argument
// in-video: yes
#include <iostream>
#include <string>

void draw_line(int width = 8);

void draw_line(int width = 8) {
    std::cout << std::string(width, '*') << '\n';
}

int main() {
    draw_line();
}
