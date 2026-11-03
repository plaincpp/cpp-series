// example: ex07_strict_iso_mode
// purpose: Show if the compiler uses strict ISO C++ mode or the GNU extensions mode.
// expect: ok
#include <iostream>

int main() {
#ifdef __STRICT_ANSI__
    std::cout << "strict ISO C++: yes\n";
#else
    std::cout << "strict ISO C++: no (GNU extensions)\n";
#endif
}
