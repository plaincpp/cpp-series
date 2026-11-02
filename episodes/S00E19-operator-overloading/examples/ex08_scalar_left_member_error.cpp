// example: ex08_scalar_left_member_error
// purpose: Show that a member operator* cannot have an int as its left operand, so 3 * v does not compile.
// expect: compile-error
// expect-match: 'int' and 'Vector2'
// in-video: yes
#include <iostream>
struct Vector2 {
    int x, y;
    Vector2 operator*(int k) const {
        return {x * k, y * k};
    }
};
int main() {
    Vector2 v{1, 2};
    Vector2 a = v * 3;
    Vector2 b = 3 * v;
    std::cout << a.x << ' ' << b.x << '\n';
}
