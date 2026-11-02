// example: ex02_reference_needs_init_error
// purpose: Show that a reference must get its object in the declaration.
// expect: compile-error
// expect-match: reference
int main() {
    int score = 10;
    int& alias;
    alias = score;
    return 0;
}
