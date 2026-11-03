// example: ex19_prvalue_init_no_move
// purpose: Show that a temporary of the same type initializes a parameter with no copy and no move.
// expect: ok
#include <iostream>

struct Buffer {
    Buffer() { std::cout << "make\n"; }
    Buffer(const Buffer&) { std::cout << "copy\n"; }
    Buffer(Buffer&&) noexcept { std::cout << "move\n"; }
};

Buffer make_buffer() {
    return Buffer{};
}

void keep(Buffer) {}

int main() {
    keep(Buffer{});
    keep(make_buffer());
}
