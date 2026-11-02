// example: ex34_empty_braces_zero
// purpose: Use empty braces, so that the members of a struct with no default values start at zero.
// expect: ok
// in-video: yes
#include <iostream>

struct Point {
    int x;
    int y;
};

int main() {
    Point p{};
    Point q{};
    std::cout << p.x << ' ' << p.y << '\n';
    std::cout << q.x << ' ' << q.y << '\n';
}
