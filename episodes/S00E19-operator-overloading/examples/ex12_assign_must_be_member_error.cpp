// example: ex12_assign_must_be_member_error
// purpose: Show that operator= must be a member function: a free operator= does not compile.
// expect: compile-error
// expect-match: must be a non-static member function
// in-video: no
struct Vector2 {
    int x, y;
};
Vector2& operator=(Vector2& left, const Vector2& right) {
    left.x = right.x;
    left.y = right.y;
    return left;
}
int main() {
    Vector2 a{1, 2};
    a = Vector2{3, 4};
    return a.x;
}
