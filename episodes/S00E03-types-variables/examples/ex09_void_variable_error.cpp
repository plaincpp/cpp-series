// example: ex09_void_variable_error
// purpose: Show that void has no values, so a variable of type void does not compile.
// expect: compile-error
// expect-match: void
int main() {
    void nothing;
}
