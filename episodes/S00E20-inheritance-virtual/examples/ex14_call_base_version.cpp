// example: ex14_call_base_version
// purpose: Call the base version of a virtual function from the override with a qualified name.
// expect: ok
// in-video: no
#include <iostream>
struct Shape {
    virtual void describe() const { std::cout << "a shape"; }
};
struct Circle : Shape {
    void describe() const override {
        Shape::describe();
        std::cout << " with a radius";
    }
};
int main() {
    Circle circle;
    const Shape& shape = circle;
    shape.describe();
    std::cout << '\n';
}
