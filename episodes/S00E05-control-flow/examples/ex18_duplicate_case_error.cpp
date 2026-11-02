// example: ex18_duplicate_case_error
// purpose: Show that two case labels with the same value do not compile.
// expect: compile-error
// expect-match: duplicate case value
#include <iostream>

int main() {
    int code = 2;
    switch (code) {
    case 1:
        std::cout << "one\n";
        break;
    case 2:
        std::cout << "two\n";
        break;
    case 1 + 1:
        std::cout << "also two\n";
        break;
    }
}
