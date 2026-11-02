// example: ex14_destructor_scope
// purpose: Show that the destructor runs when the object goes out of scope at the closing brace.
// expect: ok
// in-video: yes
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} { std::cout << "make " << id << '\n'; }
    ~Tag() { std::cout << "end " << id << '\n'; }
};
int main() {
    std::cout << "start\n";
    {
        Tag a{'a'};
        std::cout << "in block\n";
    }
    std::cout << "after block\n";
}
