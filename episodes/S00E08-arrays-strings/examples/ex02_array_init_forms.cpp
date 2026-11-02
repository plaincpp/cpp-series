// example: ex02_array_init_forms
// purpose: Show that missing initializers give zero and that empty brackets take the count from the list.
// expect: ok
#include <iostream>
#include <iterator>

int main() {
    int some[5] = {1, 2};
    int zeros[4]{};
    int deduced[] = {3, 1, 4};
    for (int value : some) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    for (int value : zeros) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
    std::cout << std::size(deduced) << ' ' << sizeof(deduced) << '\n';
}
