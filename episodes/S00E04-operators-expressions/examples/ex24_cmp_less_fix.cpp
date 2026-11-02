// example: ex24_cmp_less_fix
// purpose: Use std::cmp_less from C++20 to compare signed and unsigned values correctly.
// expect: ok
// in-video: yes
#include <iostream>
#include <utility>

int main() {
    int balance = -1;
    unsigned int limit = 1;
    std::cout << std::boolalpha;
    std::cout << std::cmp_less(balance, limit) << '\n';
    int signed_limit = static_cast<int>(limit);
    std::cout << (balance < signed_limit) << '\n';
}
