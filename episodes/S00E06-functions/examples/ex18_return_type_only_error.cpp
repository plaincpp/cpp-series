// example: ex18_return_type_only_error
// purpose: Show that two functions with the same parameters and different return types do not compile.
// expect: compile-error
// expect-match: :9:8: error:
int parse(int value) {
    return value;
}

double parse(int value) {
    return value;
}

int main() {
}
