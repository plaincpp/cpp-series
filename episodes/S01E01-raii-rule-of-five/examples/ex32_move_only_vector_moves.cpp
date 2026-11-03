// example: ex32_move_only_vector_moves
// purpose: Show that std::vector moves a move-only type on growth, also when the move is not noexcept.
// expect: ok
// in-video: no
#include <iostream>
#include <vector>
int moves = 0;
struct Handle {
    Handle() = default;
    Handle(const Handle&) = delete;
    Handle& operator=(const Handle&) = delete;
    Handle(Handle&&) { ++moves; }
};
int main() {
    std::vector<Handle> items(2);
    items.emplace_back();
    std::cout << "no copy, move without noexcept: moves " << moves << '\n';
}
