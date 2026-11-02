// example: ex06_pointer_and_object_sizes
// purpose: Show on x86-64 Linux that the pointer has 8 bytes and the heap object has its own size.
// expect: ok
#include <array>
#include <iostream>
int main() {
    std::array<int, 1000>* table = new std::array<int, 1000>{};
    std::cout << sizeof(table) << '\n';
    std::cout << sizeof(*table) << '\n';
    delete table;
}
