// example: ex07_designated_init
// purpose: Use designated initializers (C++20) to name each member, and show that a missing member gets its default.
// expect: ok
#include <iostream>

struct Point {
    int x = 0;
    int y = 0;
};

int main() {
    Point p{.x = 2, .y = 5};
    Point q{.y = 9};
    std::cout << p.x << ' ' << p.y << '\n';
    std::cout << q.x << ' ' << q.y << '\n';
}
