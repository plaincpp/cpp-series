// example: ex08_cmp_less_fix
// purpose: Use std::cmp_less to compare a signed and an unsigned value by their mathematical values.
// expect: ok
#include <iostream>
#include <utility>
#include <vector>
int main() {
    std::vector<int> values{1, 2, 3};
    int index = -1;
    std::cout << std::boolalpha;
    std::cout << std::cmp_less(index, values.size()) << '\n';
    std::cout << (static_cast<unsigned long>(index) < values.size()) << '\n';
}
