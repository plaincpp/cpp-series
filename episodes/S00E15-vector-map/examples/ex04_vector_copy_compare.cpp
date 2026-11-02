// example: ex04_vector_copy_compare
// purpose: Show that a copy of a std::vector is independent, and that == compares the elements.
// expect: ok
#include <iostream>
#include <vector>

int main() {
    std::vector<int> original{1, 2, 3};
    std::vector<int> copy = original;
    std::cout << std::boolalpha;
    std::cout << (copy == original) << '\n';
    copy[0] = 100;
    std::cout << original[0] << ' ' << copy[0] << '\n';
    std::cout << (copy == original) << '\n';
}
