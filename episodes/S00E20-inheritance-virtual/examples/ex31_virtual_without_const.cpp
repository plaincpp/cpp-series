// example: ex31_virtual_without_const
// purpose: Show that the word virtual on a function with no const makes a new virtual function, not an override.
// expect: ok
// in-video: no
#include <iostream>
struct Shape {
    virtual void draw() const { std::cout << "shape\n"; }
};
struct Circle : Shape {
    virtual void draw() { std::cout << "circle\n"; }
};
void render(const Shape& shape) { shape.draw(); }
int main() {
    render(Circle{});
}
