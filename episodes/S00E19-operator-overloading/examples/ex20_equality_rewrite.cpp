// example: ex20_equality_rewrite
// purpose: Show that C++20 uses one operator==(Money, int) also for 250 == price and for price != 100.
// expect: ok
// in-video: no
#include <iostream>
struct Money {
    int cents;
};
bool operator==(const Money& m, int cents) {
    return m.cents == cents;
}
int main() {
    Money price{250};
    std::cout << std::boolalpha;
    std::cout << (price == 250) << ' ';
    std::cout << (250 == price) << ' ';
    std::cout << (price != 100) << '\n';
}
