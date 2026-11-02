// example: ex26_string_basics
// purpose: Use std::string to join text with + and +=, get its length and compare it.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>

int main() {
    std::string first = "Ada";
    std::string last = "Lovelace";
    std::string full = first + " " + last;
    full += '!';
    std::cout << full << '\n';
    std::cout << full.size() << '\n';
    std::cout << std::boolalpha << (first == "Ada") << '\n';
}
