// example: ex03_width_guarantees
// purpose: Check the size rules of the standard at compile time, then show the bit widths on x86-64 Linux.
// expect: ok
#include <climits>
#include <iostream>

static_assert(sizeof(char) == 1);
static_assert(CHAR_BIT >= 8);
static_assert(sizeof(short) * CHAR_BIT >= 16);
static_assert(sizeof(int) * CHAR_BIT >= 16);
static_assert(sizeof(long) * CHAR_BIT >= 32);
static_assert(sizeof(long long) * CHAR_BIT >= 64);
static_assert(sizeof(short) <= sizeof(int));
static_assert(sizeof(int) <= sizeof(long));
static_assert(sizeof(long) <= sizeof(long long));

int main() {
    std::cout << "CHAR_BIT  " << CHAR_BIT << '\n';
    std::cout << "int bits  " << sizeof(int) * CHAR_BIT << '\n';
    std::cout << "long bits " << sizeof(long) * CHAR_BIT << '\n';
}
