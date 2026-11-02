// example: ex06_incomplete_type_error
// purpose: Show that a declared but not defined class cannot make an object.
// expect: compile-error
// expect-match: incomplete type
struct Engine;

int main() {
    Engine engine;
    return 0;
}
