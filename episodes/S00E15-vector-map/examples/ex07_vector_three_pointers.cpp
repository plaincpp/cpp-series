// example: ex07_vector_three_pointers
// purpose: Show that a std::vector object has the size of three pointers on x86-64 Linux with libstdc++.
// expect: ok
#include <iostream>
#include <vector>

int main() {
    std::vector<int> small{1, 2};
    std::vector<int> large(1000);
    std::cout << sizeof(small) << ' ' << sizeof(large) << '\n';
    std::cout << sizeof(int*) * 3 << '\n';
    std::cout << sizeof(std::vector<double>) << '\n';
}
