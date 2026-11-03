// example: ex30_copy_and_swap_self_move
// purpose: Show that copy-and-swap keeps the value when an object moves to itself, with no self check.
// expect: ok
// stdin: 2
#include <iostream>
#include <utility>
struct Box {
    int* value;
    explicit Box(int v) : value{new int{v}} {}
    Box(const Box& other) : value{new int{*other.value}} {}
    Box(Box&& other) noexcept : value{std::exchange(other.value, nullptr)} {}
    Box& operator=(Box other) noexcept {
        std::swap(value, other.value);
        return *this;
    }
    ~Box() { delete value; }
};
int main() {
    Box boxes[] = {Box{1}, Box{2}, Box{3}};
    int i = 0;
    std::cin >> i;
    boxes[i] = std::move(boxes[2]);
    std::cout << *boxes[i].value << '\n';
}
