// example: ex04_arrow_pointer
// purpose: Use the arrow operator to get a member through a pointer, and show that ptr->x is the same as (*ptr).x.
// expect: ok
// in-video: yes
#include <iostream>

struct Point {
    int x;
    int y;
};

void move_right(Point* target) {
    target->x += 1;
}

int main() {
    Point p{3, 4};
    Point* ptr = &p;
    ptr->y = 7;
    (*ptr).x = 5;
    move_right(ptr);
    std::cout << p.x << ' ' << p.y << '\n';
}
