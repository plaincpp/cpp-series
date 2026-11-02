// example: ex49_fallthrough_last_case
// purpose: Show that [[fallthrough]] must come just before a case label. Clang rejects it, and GCC only warns.
// expect: compile-error
// expect-match: fallthrough annotation does not directly precede switch label
// compilers: clang
#include <iostream>

int main() {
    int code = 1;
    switch (code) {
    case 1:
        std::cout << "one\n";
        [[fallthrough]];
    }
    std::cout << "end\n";
}
