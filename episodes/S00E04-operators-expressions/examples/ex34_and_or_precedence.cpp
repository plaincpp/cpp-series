// example: ex34_and_or_precedence
// purpose: Show that && comes before ||, so use parentheses when you mix them.
// expect: ok
#include <iostream>

int main() {
    bool admin = true;
    bool active = false;
    bool verified = false;
    std::cout << std::boolalpha;
    std::cout << (admin || active && verified) << '\n';
    std::cout << ((admin || active) && verified) << '\n';
}
