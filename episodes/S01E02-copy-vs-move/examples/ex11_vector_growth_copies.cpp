// example: ex11_vector_growth_copies
// purpose: Show that std::vector copies its elements on growth when the move constructor is not noexcept.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>
struct Widget {
    Widget() = default;
    Widget(const Widget&) { std::cout << "copy\n"; }
    Widget(Widget&&) { std::cout << "move\n"; }
};
int main() {
    std::vector<Widget> items;
    items.reserve(1);
    items.emplace_back();
    items.emplace_back();
}
