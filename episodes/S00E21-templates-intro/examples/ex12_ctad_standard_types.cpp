// example: ex12_ctad_standard_types
// purpose: Show that since C++17 the compiler can find the template arguments of a class from the constructor arguments.
// expect: ok
// in-video: no
#include <iostream>
#include <type_traits>
#include <utility>
#include <vector>
int main() {
    std::vector values{1, 2, 3};
    std::pair entry{7, 2.5};
    std::cout << std::boolalpha;
    std::cout << std::is_same_v<decltype(values), std::vector<int>> << '\n';
    std::cout << std::is_same_v<decltype(entry), std::pair<int, double>> << '\n';
}
