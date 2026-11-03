// example: ex12_vector_growth_moves
// purpose: Show that std::vector moves its elements on growth when the move constructor is noexcept.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>
struct Widget {
    Widget() = default;
    Widget(const Widget&) { std::cout << "copy\n"; }
    Widget(Widget&&) noexcept { std::cout << "move\n"; }
};
int main() {
    std::vector<Widget> items;
    items.reserve(1);
    items.emplace_back();
    items.emplace_back();
}
