// example: ex10_rvalue_ref_to_lvalue_error
// purpose: Show that an rvalue reference does not bind to an lvalue.
// expect: compile-error
// expect-match: lvalue of type 'int'
int main() {
    int count = 5;
    int&& r = count;
    return r;
}
