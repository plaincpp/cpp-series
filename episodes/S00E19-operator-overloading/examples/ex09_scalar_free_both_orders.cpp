// example: ex09_scalar_free_both_orders
// purpose: Use two free operator* functions, so that v * 3 and 3 * v both compile.
// expect: ok
// in-video: yes
#include <iostream>
struct Vector2 {
    int x, y;
};
Vector2 operator*(Vector2 v, int k) {
    return {v.x * k, v.y * k};
}
Vector2 operator*(int k, Vector2 v) { return v * k; }
int main() {
    Vector2 a = Vector2{1, 2} * 3;
    Vector2 b = 3 * Vector2{1, 2};
    std::cout << a.y << ' ' << b.y << '\n';
}
