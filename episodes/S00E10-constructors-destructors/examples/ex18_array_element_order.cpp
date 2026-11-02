// example: ex18_array_element_order
// purpose: Show that array elements are made in index order and destroyed in reverse index order.
// expect: ok
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} { std::cout << "make " << id << '\n'; }
    ~Tag() { std::cout << "end " << id << '\n'; }
};
int main() {
    Tag tags[3]{'x', 'y', 'z'};
    std::cout << "size " << sizeof(tags) / sizeof(tags[0]) << '\n';
}
