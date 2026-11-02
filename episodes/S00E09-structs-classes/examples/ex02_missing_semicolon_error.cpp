// example: ex02_missing_semicolon_error
// purpose: Show that a struct definition without a semicolon after the closing brace does not compile.
// expect: compile-error
// expect-match: expected ';' after struct
// in-video: yes
#include <iostream>

struct Point {
    int x;
    int y;
}

int main() {
    Point p{3, 4};
    p.x = 10;
    std::cout << p.x << ' ' << p.y << '\n';
}
