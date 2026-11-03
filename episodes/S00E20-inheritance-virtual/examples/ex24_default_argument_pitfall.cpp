// example: ex24_default_argument_pitfall
// purpose: Show that a default argument of a virtual function comes from the static type, not from the real object.
// expect: ok
// in-video: no
#include <iostream>
struct Shape {
    virtual ~Shape() = default;
    virtual void scale(int factor = 1) const { std::cout << "shape " << factor << '\n'; }
};
struct Circle : Shape {
    void scale(int factor = 2) const override { std::cout << "circle " << factor << '\n'; }
};
int main() {
    Circle circle;
    const Shape& shape = circle;
    shape.scale();
    circle.scale();
}
