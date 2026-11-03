// example: ex32_final_class_error
// purpose: Show that final after a class name stops all classes that try to derive from it.
// expect: compile-error
// expect-match: final
// in-video: no
struct Shape {
    virtual ~Shape() = default;
};
struct Circle final : Shape {
};
struct Ring : Circle {
};
int main() {
    Ring ring;
    (void)ring;
}
