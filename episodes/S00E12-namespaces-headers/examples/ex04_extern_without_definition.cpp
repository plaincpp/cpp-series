// example: ex04_extern_without_definition
// purpose: Show that an extern declaration with no definition gives a link error.
// expect: link-error
// in-video: yes
// expect-match: undefined reference to `limit'
#include <iostream>

extern int limit;

int main() {
    std::cout << limit << '\n';
}
