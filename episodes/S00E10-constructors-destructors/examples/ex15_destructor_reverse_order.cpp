// example: ex15_destructor_reverse_order
// purpose: Show that local objects are destroyed in the reverse order of their construction.
// expect: ok
// in-video: yes
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} { std::cout << "make " << id << '\n'; }
    ~Tag() { std::cout << "end " << id << '\n'; }
};
int main() {
    Tag a{'a'};
    Tag b{'b'};
    Tag c{'c'};
}
