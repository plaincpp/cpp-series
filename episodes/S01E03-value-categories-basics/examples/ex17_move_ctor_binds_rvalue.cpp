// example: ex17_move_ctor_binds_rvalue
// purpose: Show that an lvalue argument selects the copy constructor and an rvalue argument selects the move constructor.
// expect: ok
// in-video: yes
#include <iostream>
#include <utility>
struct Buffer {
    Buffer() = default;
    Buffer(const Buffer&) { std::cout << "copy\n"; }
    Buffer(Buffer&&) noexcept { std::cout << "move\n"; }
};
void keep(Buffer) {}
int main() {
    Buffer a;
    keep(a);
    keep(std::move(a));
}
