// example: ex30_shape_vector_interface
// purpose: Keep two shape types in a vector of unique_ptr to the interface, and call area for each.
// expect: ok
// in-video: no
#include <iostream>
#include <memory>
#include <vector>
struct Shape {
    virtual ~Shape() = default;
    virtual int area() const = 0;
};
struct Square : Shape {
    int area() const override { return 3 * 3; }
};
struct Rect : Shape {
    int area() const override { return 2 * 5; }
};
int main() {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.push_back(std::make_unique<Square>());
    shapes.push_back(std::make_unique<Rect>());
    for (const auto& shape : shapes) {
        std::cout << shape->area() << '\n';
    }
}
