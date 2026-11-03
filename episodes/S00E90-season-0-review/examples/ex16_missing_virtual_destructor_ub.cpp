// example: ex16_missing_virtual_destructor_ub
// purpose: Show that delete through a base pointer is undefined behavior when the base destructor is not virtual.
// expect: ub
// expect-match: new-delete-type-mismatch
#include <string>
struct Shape {
    virtual int area() const { return 0; }
    ~Shape() {}
};
struct Label : Shape {
    std::string text = "a label with a long text";
};
int main() {
    Shape* shape = new Label;
    delete shape;
}
