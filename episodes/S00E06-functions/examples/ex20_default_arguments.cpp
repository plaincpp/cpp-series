// example: ex20_default_arguments
// purpose: Show that the compiler fills each missing argument from the right with its default value.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>

void draw_line(int width = 8, char fill = '-') {
    std::cout << std::string(width, fill) << '\n';
}

int main() {
    draw_line();
    draw_line(4);
    draw_line(4, '=');
}
