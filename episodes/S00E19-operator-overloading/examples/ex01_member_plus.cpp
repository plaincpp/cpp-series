// example: ex01_member_plus
// purpose: Use a member operator+ so that a + b adds two Vector2 objects.
// expect: ok
// in-video: yes
#include <iostream>
struct Vector2 {
    int x, y;
    Vector2 operator+(const Vector2& other) const {
        return {x + other.x, y + other.y};
    }
};
int main() {
    Vector2 a{1, 2};
    Vector2 b{3, 4};
    Vector2 c = a + b;
    std::cout << c.x << ' ' << c.y << '\n';
}
