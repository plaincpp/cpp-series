// example: ex20_template_deduction_error
// purpose: Show that one template parameter cannot be deduced as int and as double from one call.
// expect: compile-error
// expect-match: no matching function for call to
#include <iostream>
template <typename T>
T larger(T a, T b) {
    return a < b ? b : a;
}
int main() {
    std::cout << larger(3, 4.5) << '\n';
}
