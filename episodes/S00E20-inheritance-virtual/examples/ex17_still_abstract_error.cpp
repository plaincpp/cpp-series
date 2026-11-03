// example: ex17_still_abstract_error
// purpose: Show that a derived class that does not override every pure virtual function is also abstract.
// expect: compile-error
// expect-match: abstract
// in-video: no
struct Shape {
    virtual ~Shape() = default;
    virtual int area() const = 0;
    virtual int perimeter() const = 0;
};
struct Square : Shape {
    int side = 3;
    int area() const override { return side * side; }
};
int main() {
    Square square;
    return square.area();
}
