// example: ex26_if_init_scope
// purpose: Show that a name in the init-statement of if is visible in the else branch too.
// expect: ok
// in-video: no
#include <iostream>
int main() {
    if (int left = 7 - 9; left > 0) {
        std::cout << "then " << left << '\n';
    } else {
        std::cout << "else " << left << '\n';
    }
}
