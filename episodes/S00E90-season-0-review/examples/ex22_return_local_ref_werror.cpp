// example: ex22_return_local_ref_werror
// purpose: Show the compiler warning for a function that returns a reference to a local variable.
// expect: compile-error
// expect-match: local variable
// flags: -Werror
// in-video: yes
#include <iostream>
#include <string>
const std::string& greeting() {
    std::string text = "hello";
    return text;
}
int main() {
    std::cout << greeting() << '\n';
}
