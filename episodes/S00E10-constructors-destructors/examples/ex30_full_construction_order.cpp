// example: ex30_full_construction_order
// purpose: Show the full order: members first, then the constructor body; destructor body first, then members in reverse.
// expect: ok
// in-video: yes
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} { std::cout << "make " << id << '\n'; }
    ~Tag() { std::cout << "end " << id << '\n'; }
};
struct Car {
    Tag engine{'e'};
    Tag wheels{'w'};
    Car() { std::cout << "Car body\n"; }
    ~Car() { std::cout << "~Car body\n"; }
};
int main() { Car car; }
