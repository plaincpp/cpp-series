// example: ex05_numeric_limits
// purpose: Use std::numeric_limits to show the range of int, unsigned int, long long and double on x86-64 Linux.
// expect: ok
// in-video: yes
#include <iostream>
#include <limits>

int main() {
    using std::numeric_limits;
    std::cout << numeric_limits<int>::min() << '\n';
    std::cout << numeric_limits<int>::max() << '\n';
    std::cout << numeric_limits<unsigned int>::max() << '\n';
    std::cout << numeric_limits<long long>::max() << '\n';
    std::cout << numeric_limits<double>::max() << '\n';
}
