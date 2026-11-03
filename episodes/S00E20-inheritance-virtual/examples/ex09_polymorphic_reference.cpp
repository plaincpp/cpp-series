// example: ex09_polymorphic_reference
// purpose: Use one function with a base reference parameter for objects of two derived types.
// expect: ok
// in-video: no
#include <iostream>
struct Shape {
    virtual void draw() const { std::cout << "shape\n"; }
};
struct Circle : Shape {
    void draw() const override { std::cout << "circle\n"; }
};
struct Square : Shape {
    void draw() const override { std::cout << "square\n"; }
};
void render(const Shape& shape) { shape.draw(); }
int main() {
    render(Circle{});
    render(Square{});
    render(Shape{});
}
