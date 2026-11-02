// example: ex11_nodiscard_werror
// purpose: Show that the compiler warns when a caller ignores the result of a nodiscard function.
// expect: compile-error
// expect-match: ignoring return value
// flags: -Werror
[[nodiscard]] int square(int value) {
    return value * value;
}

int main() {
    square(7);
}
