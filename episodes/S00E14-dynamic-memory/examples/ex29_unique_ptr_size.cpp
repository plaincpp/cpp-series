// example: ex29_unique_ptr_size
// purpose: Show on x86-64 Linux that std::unique_ptr has the same size as a raw pointer.
// expect: ok
#include <iostream>
#include <memory>
int main() {
    std::cout << sizeof(int*) << ' ' << sizeof(std::unique_ptr<int>) << '\n';
}
