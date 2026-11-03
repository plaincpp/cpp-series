// example: ex01_deep_copy
// purpose: Show that a deep copy gives the new object its own heap block.
// expect: ok
// in-video: yes
#include <iostream>
struct Box {
    int* value;
    explicit Box(int v) : value{new int{v}} {}
    Box(const Box& other) : value{new int{*other.value}} {}
    ~Box() { delete value; }
};
int main() {
    Box a{7};
    Box b = a;
    *b.value = 9;
    std::cout << *a.value << ' ' << *b.value << '\n';
}
