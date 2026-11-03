// example: ex16_const_move_copies
// purpose: Show that std::move on a const object selects the copy constructor.
// expect: ok
// in-video: yes
#include <iostream>
#include <utility>
struct Widget {
    Widget() = default;
    Widget(const Widget&) { std::cout << "copy\n"; }
    Widget(Widget&&) noexcept { std::cout << "move\n"; }
};
int main() {
    const Widget a{};
    Widget b{std::move(a)};
}
