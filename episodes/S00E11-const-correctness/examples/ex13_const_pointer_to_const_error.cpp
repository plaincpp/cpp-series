// example: ex13_const_pointer_to_const_error
// purpose: Show that a const pointer to const stops a change of the object and of the pointer.
// expect: compile-error
// expect-match: read-only
int main() {
    int score = 10;
    int bonus = 20;
    const int* const p = &score;
    *p = 15;
    p = &bonus;
}
