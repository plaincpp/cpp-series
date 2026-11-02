// example: ex09_signature_mismatch
// purpose: Show that a definition with other parameter types does not satisfy the linker.
// expect: link-error
// expect-match: undefined reference to `add(int, int)'
#include <iostream>
#include "util.h"

int main() {
    std::cout << add(2, 3) << '\n';
}
