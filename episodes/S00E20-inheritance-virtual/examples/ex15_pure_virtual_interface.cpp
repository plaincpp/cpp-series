// example: ex15_pure_virtual_interface
// purpose: Use a pure virtual function to make an interface, and call it through a reference to the interface.
// expect: ok
// in-video: yes
#include <iostream>
struct Shape {
    virtual ~Shape() = default;
    virtual int area() const = 0;
};
struct Square : Shape {
    int side = 3;
    int area() const override { return side * side; }
};
int main() {
    Square square;
    const Shape& shape = square;
    std::cout << shape.area() << '\n';
}
