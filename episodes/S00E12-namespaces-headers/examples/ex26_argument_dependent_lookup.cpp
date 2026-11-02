// example: ex26_argument_dependent_lookup
// purpose: Show that a call finds a function in the namespace of its argument type.
// expect: ok
#include <iostream>

namespace shop {
struct Item {
    int price;
};

void print(const Item& item) {
    std::cout << "price: " << item.price << '\n';
}
}

int main() {
    shop::Item tea{3};
    print(tea);
}
