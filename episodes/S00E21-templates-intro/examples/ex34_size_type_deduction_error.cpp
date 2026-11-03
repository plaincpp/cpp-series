// example: ex34_size_type_deduction_error
// purpose: Show that v.size() and 0u give two types for T on x86-64 Linux: std::size_t is unsigned long.
// expect: compile-error
// expect-match: deduced conflicting types for parameter 'T'
// in-video: no
#include <iostream>
#include <vector>
template <typename T>
T max_of(T a, T b) {
    return a < b ? b : a;
}
int main() {
    std::vector<int> v{4, 5, 6};
    std::cout << max_of(v.size(), 0u) << '\n';
}
