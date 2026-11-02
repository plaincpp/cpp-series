// example: ex02_plus_equals
// purpose: Use a member operator+= that changes the object and returns a reference to it.
// expect: ok
// in-video: yes
#include <iostream>
struct Vector2 {
    int x, y;
    Vector2& operator+=(const Vector2& other) {
        x += other.x;
        y += other.y;
        return *this;
    }
};
int main() {
    Vector2 pos{1, 2};
    pos += Vector2{10, 20};
    std::cout << pos.x << ' ' << pos.y << '\n';
}
