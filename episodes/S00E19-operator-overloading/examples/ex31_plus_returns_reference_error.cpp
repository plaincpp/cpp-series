// example: ex31_plus_returns_reference_error
// purpose: Show that operator+ must return by value: in C++23 a reference to a local result does not compile.
// expect: compile-error
// expect-match: non-const lvalue reference
// in-video: no
struct Vector2 {
    int x, y;
};
Vector2& operator+(const Vector2& a, const Vector2& b) {
    Vector2 result{a.x + b.x, a.y + b.y};
    return result;
}
int main() {
    Vector2 a{1, 2};
    return (a + a).x;
}
