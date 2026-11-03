// example: ex06_postfix_increment_error
// purpose: Show that x++ is an rvalue, so an assignment to it does not compile.
// expect: compile-error
// expect-match: assign
int main() {
    int count = 1;
    count++ = 10;
    return count;
}
