// example: ex11_member_as_free_function
// purpose: Compare a member function call with a free function that gets the address of the object.
// expect: ok
// in-video: yes
#include <iostream>
struct Point {
    int x = 0;
    void move_by(int dx) { x += dx; }
};
void move_by(Point* self, int dx) { self->x += dx; }
int main() {
    Point a;
    Point b;
    a.move_by(5);
    move_by(&b, 5);
    std::cout << a.x << ' ' << b.x << '\n';
}
