// example: ex22_when_no_copy
// purpose: Show that a reference parameter and an initialization from a temporary of the same type make no copy.
// expect: ok
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} {}
    Tag(const Tag& other) : id{other.id} { std::cout << "copy " << id << '\n'; }
};
void by_value(Tag) {}
void by_ref(const Tag&) {}
int main() {
    Tag a{'a'};
    std::cout << "1 init from object\n";
    Tag b = a;
    std::cout << "2 by value\n";
    by_value(a);
    std::cout << "3 by reference\n";
    by_ref(a);
    std::cout << "4 init from temporary\n";
    Tag c = Tag{'c'};
    std::cout << b.id << c.id << '\n';
}
