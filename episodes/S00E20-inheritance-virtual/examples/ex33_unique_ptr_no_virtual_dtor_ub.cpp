// example: ex33_unique_ptr_no_virtual_dtor_ub
// purpose: Show that std::unique_ptr to a base class with no virtual destructor also deletes with the wrong type.
// expect: ub
// expect-match: new-delete-type-mismatch
// in-video: no
#include <memory>
#include <string>
struct Shape {
    virtual int area() const { return 0; }
    ~Shape() {}
};
struct Label : Shape {
    std::string text = "a label with a long text";
};
int main() {
    std::unique_ptr<Shape> shape = std::make_unique<Label>();
}
