// example: ex12_read_right_to_left
// purpose: Use type traits to prove which part of a pointer declaration is const.
// expect: ok
// in-video: no
#include <iostream>
#include <type_traits>
int main() {
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<const int*, int const*> << '\n';
    std::cout << std::is_const_v<const int*> << '\n';
    std::cout << std::is_const_v<int* const> << '\n';
}
