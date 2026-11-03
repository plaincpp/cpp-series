// example: ex27_runtime_choice
// purpose: Show that the program selects the virtual function at run time, from input that the compiler cannot know.
// expect: ok
// stdin: s c
// in-video: no
#include <iostream>
#include <memory>
struct Shape {
    virtual ~Shape() = default;
    virtual const char* name() const { return "shape"; }
};
struct Circle : Shape {
    const char* name() const override { return "circle"; }
};
struct Square : Shape {
    const char* name() const override { return "square"; }
};
std::unique_ptr<Shape> make_shape(char kind) {
    if (kind == 'c') return std::make_unique<Circle>();
    if (kind == 's') return std::make_unique<Square>();
    return std::make_unique<Shape>();
}
int main() {
    char kind = ' ';
    while (std::cin >> kind) {
        std::cout << make_shape(kind)->name() << '\n';
    }
}
