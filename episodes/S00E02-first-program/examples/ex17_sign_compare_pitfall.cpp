// example: ex17_sign_compare_pitfall
// purpose: Show a wrong result that compiles with no error, but -Wall -Wextra warns about it.
// expect: ok
#include <iostream>

int main() {
    int balance = -1;
    unsigned int limit = 10;
    if (balance < limit) {
        std::cout << "under the limit\n";
    } else {
        std::cout << "over the limit\n";
    }
}
