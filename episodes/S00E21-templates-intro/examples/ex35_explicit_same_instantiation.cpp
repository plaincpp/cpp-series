// example: ex35_explicit_same_instantiation
// purpose: Show that max_of(1, 2) and max_of<int>(3, 4) use one function: they share one static counter.
// expect: ok
// in-video: no
#include <cstddef>
#include <iostream>
#include <vector>
template <typename T>
T max_of(T a, T b) {
    static int calls = 0;
    ++calls;
    std::cout << "call " << calls << ": ";
    return a < b ? b : a;
}
int main() {
    std::cout << max_of(1, 2) << '\n';
    std::cout << max_of<int>(3, 4) << '\n';
    std::cout << max_of(1L, 2L) << '\n';
    std::vector<int> v{4, 5, 6};
    std::cout << max_of(v.size(), std::size_t{0}) << '\n';
}
