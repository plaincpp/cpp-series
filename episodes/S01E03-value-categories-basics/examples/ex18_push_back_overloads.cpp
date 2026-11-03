// example: ex18_push_back_overloads
// purpose: Show that push_back copies an lvalue and moves an rvalue.
// expect: ok
#include <iostream>
#include <utility>
#include <vector>

struct Buffer {
    Buffer() = default;
    Buffer(const Buffer&) { std::cout << "copy\n"; }
    Buffer(Buffer&&) noexcept { std::cout << "move\n"; }
};

int main() {
    std::vector<Buffer> items;
    items.reserve(3);
    Buffer local;
    items.push_back(local);
    items.push_back(Buffer{});
    items.push_back(std::move(local));
}
