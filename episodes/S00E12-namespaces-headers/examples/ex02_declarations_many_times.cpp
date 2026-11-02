// example: ex02_declarations_many_times
// purpose: Show that a name can have many declarations but only one definition.
// expect: ok
#include <iostream>

int square(int value);
int square(int value);
extern int limit;
extern int limit;

int square(int value) {
    return value * value;
}

int limit = 10;

int main() {
    std::cout << square(4) << ' ' << limit << '\n';
}
