// example: ex03_redefinition_error
// purpose: Show that two definitions of one function in one file do not compile.
// expect: compile-error
// expect-match: redefinition of
int square(int value) {
    return value * value;
}

int square(int value) {
    return value * value;
}

int main() {
    return square(3) - 9;
}
