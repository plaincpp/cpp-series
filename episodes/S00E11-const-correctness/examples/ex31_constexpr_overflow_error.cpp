// example: ex31_constexpr_overflow_error
// purpose: Show that the compiler rejects signed overflow in a constant expression.
// expect: compile-error
// expect-match: constant expression
// in-video: no
constexpr int square(int n) {
    return n * n;
}
constexpr int big = square(100000);
int main() {
    return big;
}
