// example: ex04_move_constructor
// purpose: Write a move constructor that takes the pointer of the source and sets the source to null.
// expect: ok
// in-video: yes
#include <iostream>
#include <utility>
struct Box {
    int* value;
    explicit Box(int v) : value{new int{v}} {}
    Box(Box&& other) noexcept
        : value{std::exchange(other.value, nullptr)} {}
    ~Box() { delete value; }
};
int main() {
    Box a{7};
    Box b = std::move(a);
    std::cout << *b.value << ' ' << (a.value == nullptr) << '\n';
}
