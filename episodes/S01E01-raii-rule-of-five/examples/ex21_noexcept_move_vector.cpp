// example: ex21_noexcept_move_vector
// purpose: Show that std::vector copies its elements on growth when the move constructor is not noexcept.
// expect: ok
#include <iostream>
#include <vector>
int copies = 0;
int moves = 0;
struct Safe {
    Safe() = default;
    Safe(const Safe&) { ++copies; }
    Safe(Safe&&) noexcept { ++moves; }
};
struct Risky {
    Risky() = default;
    Risky(const Risky&) { ++copies; }
    Risky(Risky&&) { ++moves; }
};
template <class T>
void grow(const char* label) {
    copies = 0;
    moves = 0;
    std::vector<T> items(2);
    items.emplace_back();
    std::cout << label << ": copies " << copies << ", moves " << moves << '\n';
}
int main() {
    grow<Safe>("noexcept move");
    grow<Risky>("move without noexcept");
}
