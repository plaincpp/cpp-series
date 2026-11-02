// example: ex02_vector_init_forms
// purpose: Compare parentheses and braces when you make a std::vector of int.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>

int main() {
    std::vector<int> a(3);
    std::vector<int> b(3, 7);
    std::vector<int> c{3, 7};
    std::cout << a.size() << ": " << a[0] << '\n';
    std::cout << b.size() << ": " << b[0] << '\n';
    std::cout << c.size() << ": " << c[0] << '\n';
}
