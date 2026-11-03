// example: ex21_two_phase_error
// purpose: Show that the compiler checks the names that do not depend on T before any instantiation.
// expect: compile-error
// expect-match: 'log_value'
// in-video: no
template <typename T>
T doubled(T value) {
    log_value();
    return value + value;
}
int main() {
}
