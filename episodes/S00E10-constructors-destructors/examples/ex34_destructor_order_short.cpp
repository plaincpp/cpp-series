// example: ex34_destructor_order_short
// purpose: Show in a few short lines that the last object made is the first object destroyed.
// expect: ok
// in-video: yes
#include <cstdio>
struct Tag {
    char id;
    Tag(char c) : id{c} { say("make"); }
    ~Tag() { say("end"); }
    void say(const char* s) {
        std::printf("%s %c\n", s, id);
    }
};
int main() { Tag a{'a'}; Tag b{'b'}; }
