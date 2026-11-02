// example: ex21_copy_constructor_calls
// purpose: Show that the copy constructor runs for a copy initialization and for a by-value argument.
// expect: ok
// in-video: yes
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} {}
    Tag(const Tag& other) : id{other.id} {
        std::cout << "copy " << id << '\n';
    }
};
void show(Tag t) { std::cout << "show " << t.id << '\n'; }
int main() {
    Tag a{'a'};
    Tag b = a;
    show(b);
}
