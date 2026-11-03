// example: ex04_assign_to_rvalue_error
// purpose: Show that the built-in assignment does not accept an rvalue on the left side.
// expect: compile-error
// expect-match: assign
int main() {
    int total = 10;
    total + 1 = 5;
    return total;
}
