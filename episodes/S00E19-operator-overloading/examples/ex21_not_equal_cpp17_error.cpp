// example: ex21_not_equal_cpp17_error
// purpose: Show that C++17 does not make != from operator==, so a != b does not compile there.
// expect: compile-error
// expect-match: 'Vector2' and 'Vector2'
// std: c++17
// in-video: no
#include <iostream>
struct Vector2 {
    int x, y;
    bool operator==(const Vector2& other) const {
        return x == other.x && y == other.y;
    }
};
int main() {
    Vector2 a{1, 2};
    Vector2 b{2, 1};
    std::cout << (a == b) << (a != b) << '\n';
}
