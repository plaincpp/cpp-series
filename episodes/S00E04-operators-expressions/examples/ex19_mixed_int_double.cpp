// example: ex19_mixed_int_double
// purpose: Show that int * double converts the int to double, so the result is a double.
// expect: ok
// in-video: no
#include <iostream>
#include <type_traits>

int main() {
    int count = 3;
    double price = 2.5;
    auto total = count * price;
    static_assert(std::is_same_v<decltype(total), double>);
    std::cout << total << '\n';
}
