// example: ex32_string_object_size
// purpose: Show that sizeof(std::string) does not change with the text length (x86-64 Linux, libstdc++).
// expect: ok
#include <iostream>
#include <string>

int main() {
    std::string empty;
    std::string text(1000, 'x');
    std::cout << sizeof(empty) << ' ' << sizeof(text) << '\n';
    std::cout << empty.size() << ' ' << text.size() << '\n';
    std::cout << empty.capacity() << '\n';
}
