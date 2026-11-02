// example: ex25_unsigned_difference_pitfall
// purpose: Show that the difference of two unsigned values wraps around before it goes into a long long.
// expect: ok
#include <iostream>

int main() {
    unsigned int start = 5;
    unsigned int finish = 3;
    long long change = finish - start;
    std::cout << change << '\n';
    long long correct = static_cast<long long>(finish) - start;
    std::cout << correct << '\n';
}
