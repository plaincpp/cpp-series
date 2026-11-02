// example: ex35_vector2_full
// purpose: Use a complete Vector2 with +=, +, -, unary -, *, == and << to move a point in steps.
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
    Vector2& operator-=(const Vector2& other) {
        x -= other.x;
        y -= other.y;
        return *this;
    }
    Vector2 operator-() const { return {-x, -y}; }
    bool operator==(const Vector2&) const = default;
};
Vector2 operator+(Vector2 left, const Vector2& right) { return left += right; }
Vector2 operator-(Vector2 left, const Vector2& right) { return left -= right; }
Vector2 operator*(Vector2 v, int k) { return {v.x * k, v.y * k}; }
Vector2 operator*(int k, Vector2 v) { return v * k; }
std::ostream& operator<<(std::ostream& out, const Vector2& v) {
    return out << '(' << v.x << ", " << v.y << ')';
}
int main() {
    Vector2 position{0, 0};
    const Vector2 velocity{2, 1};
    for (int step = 1; step <= 3; ++step) {
        position += velocity;
        std::cout << "step " << step << ": " << position << '\n';
    }
    Vector2 back = position + -velocity * 3;
    std::cout << "back: " << back << '\n';
    std::cout << std::boolalpha << (back == Vector2{0, 0}) << '\n';
    std::cout << "gap: " << (position - 2 * velocity) << '\n';
}
