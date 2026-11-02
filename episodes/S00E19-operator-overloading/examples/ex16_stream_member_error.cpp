// example: ex16_stream_member_error
// purpose: Show that a member operator<< puts the Vector2 on the left, so std::cout << v does not compile.
// expect: compile-error
// expect-match: and 'Vector2')
// in-video: no
#include <iostream>
struct Vector2 {
    int x, y;
    std::ostream& operator<<(std::ostream& out) const {
        return out << '(' << x << ", " << y << ')';
    }
};
int main() {
    Vector2 v{1, 2};
    v << std::cout;
    std::cout << v << '\n';
}
