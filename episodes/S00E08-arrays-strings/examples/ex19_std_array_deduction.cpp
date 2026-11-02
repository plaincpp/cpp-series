// example: ex19_std_array_deduction
// purpose: Show that std::array can take its element type and size from the initializer (C++17).
// expect: ok
#include <array>
#include <iostream>
#include <type_traits>

int main() {
    std::array primes{2, 3, 5, 7};
    std::array<int, 4> partial{1, 2};
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<decltype(primes), std::array<int, 4>> << '\n';
    for (int value : partial) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}
