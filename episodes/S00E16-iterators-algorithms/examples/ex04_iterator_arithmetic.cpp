// example: ex04_iterator_arithmetic
// purpose: Show that a vector iterator is random access: it can jump, subtract and compare.
// expect: ok
#include <iostream>
#include <iterator>
#include <vector>

int main() {
    std::vector<int> ages{30, 25, 41, 19, 52};
    auto first = ages.begin();
    auto last = ages.end();
    std::cout << *(first + 2) << '\n';
    std::cout << first[3] << '\n';
    std::cout << last - first << '\n';
    std::cout << std::distance(first, last) << '\n';
    std::cout << (first < last) << '\n';
    auto back = last - 1;
    std::cout << *back << '\n';
}
