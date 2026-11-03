// example: ex20_const_move_copies_pitfall
// purpose: Show that std::move on a const object selects the copy constructor.
// expect: ok
#include <iostream>
#include <utility>

struct Buffer {
    Buffer() = default;
    Buffer(const Buffer&) { std::cout << "copy\n"; }
    Buffer(Buffer&&) noexcept { std::cout << "move\n"; }
};

void keep(Buffer) {}

int main() {
    const Buffer settings;
    keep(std::move(settings));
}
