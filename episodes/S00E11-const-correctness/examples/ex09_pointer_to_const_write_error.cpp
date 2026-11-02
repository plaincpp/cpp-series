// example: ex09_pointer_to_const_write_error
// purpose: Show that a write through a pointer to const does not compile.
// expect: compile-error
// expect-match: read-only
// in-video: yes
int main() {
    int score = 10;
    const int* p = &score;
    *p = 15;
}
