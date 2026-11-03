// example: ex26_swap_assign_ambiguous_error
// purpose: Show that a by-value assignment and a move assignment together make an rvalue assignment ambiguous.
// expect: compile-error
// expect-match: ambiguous
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
    Box& operator=(Box&& other) noexcept {
        std::swap(value, other.value);
        return *this;
    }
    ~Box() { delete value; }
};
int main() {
    Box a{1};
    Box b{2};
    b = std::move(a);
    return *b.value;
}
