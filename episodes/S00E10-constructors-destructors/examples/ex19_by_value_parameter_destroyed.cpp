// example: ex19_by_value_parameter_destroyed
// purpose: Show that a by-value parameter is a copy, and the copy is destroyed before the next statement in main.
// expect: ok
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} { std::cout << "make " << id << '\n'; }
    Tag(const Tag& other) : id{other.id} { std::cout << "copy " << id << '\n'; }
    ~Tag() { std::cout << "end " << id << '\n'; }
};
void show(Tag t) {
    std::cout << "show " << t.id << '\n';
}
int main() {
    Tag a{'a'};
    show(a);
    std::cout << "back in main\n";
}
