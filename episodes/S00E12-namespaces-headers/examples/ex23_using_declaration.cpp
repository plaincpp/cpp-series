// example: ex23_using_declaration
// purpose: Use a using-declaration to bring one name into a function.
// expect: ok
#include <iostream>
#include <string>

namespace shop {
int price_of(const std::string& item) {
    return item == "tea" ? 3 : 5;
}
}

int main() {
    using std::cout;
    using shop::price_of;
    cout << price_of("tea") << ' ' << price_of("cake") << '\n';
}
