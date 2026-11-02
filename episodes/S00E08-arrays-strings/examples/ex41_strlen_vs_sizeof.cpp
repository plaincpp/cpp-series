// example: ex41_strlen_vs_sizeof
// purpose: Compare sizeof and std::strlen on a char array, and size() on a std::string.
// expect: ok
#include <cstring>
#include <iostream>
#include <string>

int main() {
    char name[16] = "Ada";
    std::string copy = name;
    std::cout << sizeof(name) << '\n';
    std::cout << std::strlen(name) << '\n';
    std::cout << copy.size() << '\n';
}
