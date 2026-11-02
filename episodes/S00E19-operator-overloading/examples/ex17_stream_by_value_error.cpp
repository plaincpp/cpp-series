// example: ex17_stream_by_value_error
// purpose: Show that operator<< cannot return std::ostream by value, because a stream has no copy constructor.
// expect: compile-error
// expect-match: deleted
// in-video: no
#include <iostream>
struct Vector2 {
    int x, y;
};
std::ostream operator<<(std::ostream& out, const Vector2& v) {
    return out << '(' << v.x << ", " << v.y << ')';
}
int main() {
    std::cout << Vector2{1, 2} << '\n';
}
