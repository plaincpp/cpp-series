// example: ex24_return_local_const_ref_ub
// purpose: Show that a returned reference to a local variable dangles, and AddressSanitizer finds the read.
// expect: ub
// expect-match: stack-use-after-return
// compilers: clang
// in-video: yes
#include <iostream>
#include <string>

const std::string& greet(const std::string& name) {
    std::string text = "Hello, " + name;
    return text;
}

int main() {
    std::cout << greet("Ada") << '\n';
}
