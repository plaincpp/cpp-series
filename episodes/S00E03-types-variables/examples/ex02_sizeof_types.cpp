// example: ex02_sizeof_types
// purpose: Show the size in bytes of each fundamental type on x86-64 Linux (LP64) with sizeof.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    std::cout << "bool        " << sizeof(bool) << '\n';
    std::cout << "char        " << sizeof(char) << '\n';
    std::cout << "short       " << sizeof(short) << '\n';
    std::cout << "int         " << sizeof(int) << '\n';
    std::cout << "long        " << sizeof(long) << '\n';
    std::cout << "long long   " << sizeof(long long) << '\n';
    std::cout << "float       " << sizeof(float) << '\n';
    std::cout << "double      " << sizeof(double) << '\n';
    std::cout << "long double " << sizeof(long double) << '\n';
}
