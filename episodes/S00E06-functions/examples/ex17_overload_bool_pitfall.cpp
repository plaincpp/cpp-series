// example: ex17_overload_bool_pitfall
// purpose: Show that a string literal selects the bool overload, not the std::string overload.
// expect: ok
// in-video: yes
#include <iostream>
#include <string>

void report(bool) { std::cout << "bool\n"; }
void report(std::string) { std::cout << "string\n"; }

int main() {
    report("disk full");
    report(std::string{"disk full"});
}
