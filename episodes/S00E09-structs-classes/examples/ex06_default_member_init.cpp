// example: ex06_default_member_init
// purpose: Use default member initializers, so that every Point starts with known values.
// expect: ok
// in-video: yes
#include <iostream>

struct Point {
    int x = 0;
    int y = 0;
};

int main() {
    Point p;
    Point q{5};
    std::cout << p.x << ' ' << p.y << '\n';
    std::cout << q.x << ' ' << q.y << '\n';
}
