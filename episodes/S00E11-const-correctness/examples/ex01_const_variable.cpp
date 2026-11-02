// example: ex01_const_variable
// purpose: Show that a const variable keeps the value from its initialization.
// expect: ok
// in-video: no
#include <iostream>
int main() {
    const int days_per_week = 7;
    const double price = 2.5;
    int weeks = 3;
    std::cout << weeks * days_per_week << '\n';
    std::cout << price * days_per_week << '\n';
}
