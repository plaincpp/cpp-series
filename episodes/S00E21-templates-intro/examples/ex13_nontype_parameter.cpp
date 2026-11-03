// example: ex13_nontype_parameter
// purpose: Use a non-type template parameter: a compile-time number that is part of the type.
// expect: ok
// in-video: no
#include <array>
#include <cstddef>
#include <iostream>
#include <type_traits>
template <typename T, std::size_t Capacity>
class FixedStack {
    std::array<T, Capacity> items{};
    std::size_t count = 0;
public:
    bool push(const T& value) {
        if (count == Capacity) {
            return false;
        }
        items[count] = value;
        ++count;
        return true;
    }
    std::size_t size() const { return count; }
};
int main() {
    FixedStack<int, 2> small;
    std::cout << small.push(1);
    std::cout << small.push(2);
    std::cout << small.push(3) << '\n';
    std::cout << small.size() << '\n';
    std::cout << std::is_same_v<FixedStack<int, 2>, FixedStack<int, 3>> << '\n';
}
