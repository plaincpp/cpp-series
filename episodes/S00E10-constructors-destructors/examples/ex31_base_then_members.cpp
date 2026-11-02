// example: ex31_base_then_members
// purpose: Show that a base class is made before the members, and destroyed after them.
// expect: ok
#include <iostream>
struct Tag {
    char id;
    Tag(char c) : id{c} { std::cout << "make " << id << '\n'; }
    ~Tag() { std::cout << "end " << id << '\n'; }
};
struct Vehicle {
    Vehicle() { std::cout << "Vehicle body\n"; }
    ~Vehicle() { std::cout << "~Vehicle body\n"; }
};
struct Car : Vehicle {
    Tag engine{'e'};
    Car() { std::cout << "Car body\n"; }
    ~Car() { std::cout << "~Car body\n"; }
};
int main() {
    Car car;
}
