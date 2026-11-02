// example: ex26_constexpr_function
// purpose: Show that one constexpr function works at compile time and at run time.
// expect: ok
// stdin: 9
// in-video: yes
#include <iostream>
constexpr int square(int n) {
    return n * n;
}
int main() {
    static_assert(square(12) == 144);
    int input = 0;
    std::cin >> input;
    std::cout << square(input) << '\n';
}
