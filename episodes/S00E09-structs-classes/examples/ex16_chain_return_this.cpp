// example: ex16_chain_return_this
// purpose: Return *this by reference, so that one statement can chain several calls on the same object.
// expect: ok
#include <iostream>

struct Point {
    int x = 0;
    int y = 0;
    Point& move_by(int dx, int dy) {
        x += dx;
        y += dy;
        return *this;
    }
};

int main() {
    Point p;
    p.move_by(1, 0).move_by(0, 2).move_by(3, 3);
    std::cout << p.x << ' ' << p.y << '\n';
}
