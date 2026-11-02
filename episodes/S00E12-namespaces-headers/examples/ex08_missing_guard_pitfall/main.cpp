// example: ex08_missing_guard_pitfall
// purpose: Show that a header with no guard, included two times, gives a redefinition error.
// expect: compile-error
// expect-match: redefinition of
// in-video: yes
#include <iostream>
#include "money.h"
#include "price.h"

int main() {
    Money price{1000};
    Money total = add_tax(price);
    std::cout << total.cents << '\n';
}
