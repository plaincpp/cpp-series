// example: ex08_class_rvalue_assign
// purpose: Show that a class rvalue accepts an assignment, because operator= is a member function.
// expect: ok
#include <iostream>
#include <string>

std::string make_title() {
    return "draft";
}

int main() {
    std::cout << (make_title() = "final") << '\n';
    std::cout << (std::string{"temp"} += "!") << '\n';
}
