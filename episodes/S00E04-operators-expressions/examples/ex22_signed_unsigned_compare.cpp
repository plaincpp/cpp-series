// example: ex22_signed_unsigned_compare
// purpose: Show that -1 < 1u is false, because -1 converts to a large unsigned value.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    int balance = -1;
    unsigned int limit = 1;
    std::cout << std::boolalpha;
    std::cout << (balance < limit) << '\n';
    std::cout << static_cast<unsigned int>(balance) << '\n';
}
