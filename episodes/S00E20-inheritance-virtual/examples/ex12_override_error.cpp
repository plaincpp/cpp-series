// example: ex12_override_error
// purpose: Show that override makes the compiler stop when the function does not override a base function.
// expect: compile-error
// expect-match: marked 'override'
// in-video: yes
#include <iostream>
struct Shape {
    virtual void draw() const { std::cout << "shape\n"; }
};
struct Circle : Shape {
    void draw() override { std::cout << "circle\n"; }
};
void render(const Shape& shape) { shape.draw(); }
int main() {
    Circle circle;
    render(circle);
}
