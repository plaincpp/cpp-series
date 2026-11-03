// example: ex16_abstract_instance_error
// purpose: Show that you cannot make an object of a class that has a pure virtual function.
// expect: compile-error
// expect-match: abstract
// in-video: yes
struct Shape {
    virtual ~Shape() = default;
    virtual int area() const = 0;
};
int main() {
    Shape shape;
    return shape.area();
}
