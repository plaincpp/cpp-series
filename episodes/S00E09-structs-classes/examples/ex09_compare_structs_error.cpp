// example: ex09_compare_structs_error
// purpose: Show that the compiler does not write an == operator for a struct, so a == b does not compile.
// expect: compile-error
// expect-match: 'Point' and 'Point'
struct Point {
    int x;
    int y;
};

int main() {
    Point a{1, 2};
    Point b{1, 2};
    bool same = a == b;
    return same ? 0 : 1;
}
