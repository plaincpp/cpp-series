// example: ex35_signature_mismatch_link_error
// purpose: Show that a definition with different parameter types does not define the declared function.
// expect: link-error
// expect-match: undefined reference to `parse(char const*)'
#include <iostream>
#include "parse.h"

int main() {
    std::cout << parse("abc") << '\n';
}
