// example: ex19_const_parameter_same_function
// purpose: Show that const on a value parameter does not make a new overload.
// expect: compile-error
// expect-match: redefinition
int twice(int value) {
    return value * 2;
}

int twice(const int value) {
    return value * 2;
}

int main() {
}
