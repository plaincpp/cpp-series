// example: ex15_std_move_discarded_warning
// purpose: Show that std::move alone moves nothing, and both compilers warn (-Werror makes it an error).
// expect: compile-error
// expect-match: nodiscard
// flags: -Werror
#include <iostream>
#include <string>
#include <utility>
int main() {
    std::string name = "Ada Lovelace";
    std::move(name);
    std::cout << name << '\n';
}
