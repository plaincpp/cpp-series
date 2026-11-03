// example: ex03_conflicting_deduction_error
// purpose: Show that deduction does not convert: max_of(3, 2.5) gives int and double for one T.
// expect: compile-error
// expect-match: deduced conflicting types for parameter 'T'
// in-video: yes
#include <iostream>
template <typename T>
T max_of(T a, T b) {
    return a < b ? b : a;
}
int main() {
    std::cout << max_of(3, 2.5) << '\n';
}
