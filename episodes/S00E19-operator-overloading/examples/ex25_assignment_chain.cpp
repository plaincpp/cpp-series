// example: ex25_assignment_chain
// purpose: Show that operator= returns a reference to the left object, so a = b = c works from right to left.
// expect: ok
// in-video: no
#include <iostream>
struct Vector2 {
    int x, y;
};
int main() {
    Vector2 a{1, 2};
    Vector2 b{3, 4};
    Vector2 c{5, 6};
    a = b = c;
    std::cout << a.x << ' ' << b.x << ' ' << c.x << '\n';
    (a = Vector2{7, 8}).x = 9;
    std::cout << a.x << ' ' << a.y << '\n';
}
