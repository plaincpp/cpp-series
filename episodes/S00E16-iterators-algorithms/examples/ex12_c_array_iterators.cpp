// example: ex12_c_array_iterators
// purpose: Show that pointers into a C array are iterators, so std::begin, std::end and std::sort work on it.
// expect: ok
#include <algorithm>
#include <iostream>
#include <iterator>

int main() {
    int ages[]{30, 25, 41, 19};
    std::sort(std::begin(ages), std::end(ages));
    for (int age : ages) {
        std::cout << age << ' ';
    }
    std::cout << '\n';
    int* first = ages;
    int* last = ages + 4;
    std::cout << (std::end(ages) == last) << '\n';
    std::cout << std::find(first, last, 30) - first << '\n';
}
