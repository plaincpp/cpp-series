// example: ex32_surprise_plus_pitfall
// purpose: Show an operator+ that does a surprise action: it changes its left operand.
// expect: ok
// in-video: yes
#include <iostream>
struct Vector2 {
    int x, y;
    Vector2 operator+(const Vector2& other) {
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
