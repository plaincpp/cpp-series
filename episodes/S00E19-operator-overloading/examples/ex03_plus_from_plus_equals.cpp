// example: ex03_plus_from_plus_equals
// purpose: Write operator+ as a free function that copies the left operand and uses operator+=.
// expect: ok
// in-video: no
#include <iostream>
struct Vector2 {
    int x, y;
    Vector2& operator+=(const Vector2& other) {
        x += other.x;
        y += other.y;
        return *this;
    }
};
Vector2 operator+(Vector2 left, const Vector2& right) {
    return left += right;
}
int main() {
    Vector2 a{1, 2};
    Vector2 c = a + Vector2{3, 4};
    std::cout << "a: " << a.x << ' ' << a.y << '\n';
    std::cout << "c: " << c.x << ' ' << c.y << '\n';
}
