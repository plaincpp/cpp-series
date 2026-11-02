// example: ex03_statement_scope
// purpose: Show that a name in a for or if initializer exists only in that statement.
// expect: ok
#include <iostream>

int main() {
    for (int i = 0; i < 3; ++i) {
        int square = i * i;
        std::cout << square << '\n';
    }
    if (int left = 7 - 3; left > 0) {
        std::cout << "left: " << left << '\n';
    }
}
