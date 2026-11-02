// example: ex27_member_order_trace
// purpose: Show that members initialize in declaration order, not in the order of the member initializer list.
// expect: ok
// in-video: yes
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} { std::cout << "make " << id << '\n'; }
    ~Tag() { std::cout << "end " << id << '\n'; }
};
struct Pair {
    Tag first;
    Tag second;
    Pair() : second{'2'}, first{'1'} {}
};
int main() {
    Pair p;
}
