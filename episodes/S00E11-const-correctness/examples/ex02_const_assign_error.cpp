// example: ex02_const_assign_error
// purpose: Show that the compiler stops an assignment to a const variable.
// expect: compile-error
// expect-match: max_tries
// in-video: yes
int main() {
    const int max_tries = 3;
    max_tries = 5;
}
