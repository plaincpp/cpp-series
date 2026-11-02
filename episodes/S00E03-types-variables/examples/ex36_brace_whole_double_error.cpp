// example: ex36_brace_whole_double_error
// purpose: Show that braces reject every double to int conversion, also 2.0, which has no fraction.
// expect: compile-error
// expect-match: narrow
// in-video: no
int main() {
    int count{2.0};
    return count;
}
