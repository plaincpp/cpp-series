// example: ex23_string_view_dangling_ub
// purpose: Show that a std::string_view of a temporary string dangles after the statement.
// expect: ub
// expect-match: heap-use-after-free
// stdin: Ada
#include <iostream>
#include <string>
#include <string_view>

std::string full_name(const std::string& first) {
    return first + " Lovelace, Countess of Lovelace";
}

int main() {
    std::string first;
    std::cin >> first;
    std::string_view name = full_name(first);
    std::cout << name << '\n';
}
