// example: ex10_member_function
// purpose: Add a member function to a struct, and call it on an object with the dot.
// expect: ok
// in-video: yes
#include <iostream>
struct Point {
    int x = 0;
    int y = 0;
    void move_by(int dx, int dy) {
        x += dx;
        y += dy;
    }
};
int main() {
    Point p{3, 4};
    p.move_by(2, 3);
    std::cout << p.x << ' ' << p.y << '\n';
}
