// example: ex19_odr_violation_lto
// purpose: Show that GCC link-time optimization finds a class with two different definitions.
// expect: link-error
// in-video: yes
// expect-match: violates the C++ One Definition Rule
// flags: -flto -Werror=odr
// compilers: gcc
#include <iostream>

struct Item {
    int id;
    double count;
};

int total(const Item& item);

int main() {
    Item item{1, 2.5};
    std::cout << total(item) << '\n';
}
