// example: ex19_case_not_constant_error
// purpose: Show that a case label must be a constant expression. A variable fails.
// expect: compile-error
// expect-match: constant expression
#include <iostream>

int main() {
    int limit = 3;
    int code = 3;
    switch (code) {
    case limit:
        std::cout << "at the limit\n";
        break;
    }
}
