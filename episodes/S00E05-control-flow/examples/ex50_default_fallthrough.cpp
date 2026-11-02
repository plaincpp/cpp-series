// example: ex50_default_fallthrough
// purpose: Show that a default label with no break also falls through into the next case.
// expect: ok
#include <iostream>

int main() {
    int code = 7;
    switch (code) {
    case 1:
        std::cout << "one\n";
        break;
    default:
        std::cout << "other\n";
    case 2:
        std::cout << "two\n";
        break;
    }
}
