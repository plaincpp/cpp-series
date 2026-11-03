// example: ex25_pure_virtual_destructor_link_error
// purpose: Show that a pure virtual destructor still needs a body, because each derived destructor calls it.
// expect: link-error
// expect-match: undefined reference
// in-video: no
struct Shape {
    virtual ~Shape() = 0;
};
struct Square : Shape {
};
int main() {
    Square square;
}
