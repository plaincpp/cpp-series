// example: ex05_builtin_types_error
// purpose: Show that an operator overload needs at least one operand of a class or enumeration type.
// expect: compile-error
// expect-match: class or enum
// in-video: yes
int operator+(int a, int b) {
    return a - b;
}
int main() {
    return 2 + 2;
}
