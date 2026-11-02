// example: ex37_implicit_destructor_members
// purpose: Show that the destructor that the compiler writes destroys each member in reverse declaration order.
// expect: ok
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} { std::cout << "make " << id << '\n'; }
    ~Tag() { std::cout << "end " << id << '\n'; }
};
struct Team {
    Tag lead{'L'};
    Tag helper{'H'};
};
int main() {
    Team team;
    std::cout << "team ready\n";
}
