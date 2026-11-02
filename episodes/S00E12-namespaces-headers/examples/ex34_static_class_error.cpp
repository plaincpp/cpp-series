// example: ex34_static_class_error
// purpose: Show that static does not give internal linkage to a class.
// expect: compile-error
// expect-match: a storage class can only be specified for objects and functions
// compilers: gcc
static struct Line {
    int length;
};

int main() {
    Line line{3};
    return line.length - 3;
}
