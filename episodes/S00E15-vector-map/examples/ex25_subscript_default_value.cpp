// example: ex25_subscript_default_value
// purpose: Show that operator[] adds a value-initialized element: 0 for int and an empty string.
// expect: ok
#include <iostream>
#include <map>
#include <string>

int main() {
    std::map<std::string, int> counts;
    std::map<std::string, std::string> emails;
    std::cout << counts["Ali"] << '\n';
    std::cout << "<" << emails["Ali"] << ">\n";
    std::cout << counts.size() << ' ' << emails.size() << '\n';
}
