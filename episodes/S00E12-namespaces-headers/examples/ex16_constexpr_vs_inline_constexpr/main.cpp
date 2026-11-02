// example: ex16_constexpr_vs_inline_constexpr
// purpose: Show that each file gets its own constexpr variable, but shares one inline constexpr variable.
// expect: ok
#include <iostream>
#include "config.h"
#include "other.h"

int main() {
    std::cout << std::boolalpha;
    std::cout << (&max_retries == retries_address()) << '\n';
    std::cout << (&max_users == users_address()) << '\n';
}
