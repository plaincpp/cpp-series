// example: ex33_const_plus_catches_error
// purpose: Show that const on operator+ makes the compiler find a change to the left operand.
// expect: compile-error
// expect-match: member
// in-video: no
#include <iostream>
struct Vector2 {
    int x, y;
    Vector2 operator+(const Vector2& other) const {
        x += other.x;
        y += other.y;
        return *this;
    }
};
int main() {
    Vector2 a{1, 2};
    Vector2 c = a + Vector2{3, 4};
    std::cout << a.x << ' ' << c.x << '\n';
}
