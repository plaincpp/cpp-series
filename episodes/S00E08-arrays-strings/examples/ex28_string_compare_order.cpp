// example: ex28_string_compare_order
// purpose: Show that < on strings compares character codes from left to right, not numbers.
// expect: ok
#include <iostream>
#include <string>

int main() {
    std::string apple = "apple";
    std::cout << std::boolalpha;
    std::cout << (apple < std::string("banana")) << '\n';
    std::cout << (std::string("Zebra") < apple) << '\n';
    std::cout << (std::string("app") < apple) << '\n';
    std::cout << (std::string("10") < std::string("9")) << '\n';
}
