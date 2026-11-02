// example: ex33_empty_struct_size
// purpose: Show that a struct with no data members still has a size of at least 1 byte.
// expect: ok
#include <iostream>

struct Tag {
};

struct Greeter {
    void hello() const { std::cout << "hello\n"; }
};

int main() {
    Tag a;
    Tag b;
    std::cout << sizeof(Tag) << ' ' << sizeof(Greeter) << '\n';
    std::cout << std::boolalpha << (&a != &b) << '\n';
}
