// example: ex11_missing_const_pitfall
// purpose: Show that a derived function with a different signature does not override, so the base version runs.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
    virtual void draw() const { std::cout << "shape\n"; }
};
struct Circle : Shape {
    void draw() { std::cout << "circle\n"; }
};
void render(const Shape& shape) { shape.draw(); }
int main() {
    Circle circle;
    render(circle);
}
