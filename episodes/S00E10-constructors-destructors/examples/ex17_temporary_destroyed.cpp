// example: ex17_temporary_destroyed
// purpose: Show that a temporary object is destroyed at the end of its full expression.
// expect: ok
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} { std::cout << "make " << id << '\n'; }
    ~Tag() { std::cout << "end " << id << '\n'; }
};
int main() {
    Tag a{'a'};
    Tag{'t'};
    std::cout << "next line\n";
}
