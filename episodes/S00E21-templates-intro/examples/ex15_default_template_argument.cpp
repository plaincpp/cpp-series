// example: ex15_default_template_argument
// purpose: Use default template arguments, so that empty angle brackets give the default type and capacity.
// expect: ok
// in-video: no
#include <array>
#include <cstddef>
#include <iostream>
#include <type_traits>
template <typename T = int, std::size_t Capacity = 4>
struct Buffer {
    std::array<T, Capacity> items{};
};
int main() {
    Buffer<> a;
    Buffer<double> b;
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<decltype(a), Buffer<int, 4>> << '\n';
    std::cout << b.items.size() << '\n';
}
