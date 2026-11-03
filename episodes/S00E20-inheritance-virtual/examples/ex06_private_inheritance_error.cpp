// example: ex06_private_inheritance_error
// purpose: Show that class inheritance is private by default, so a Square is not usable as a Shape.
// expect: compile-error
// expect-match: base
// in-video: no
class Shape {
public:
    int x = 0;
};
class Square : Shape {
};
int main() {
    Square square;
    Shape* shape = &square;
    return shape->x;
}
