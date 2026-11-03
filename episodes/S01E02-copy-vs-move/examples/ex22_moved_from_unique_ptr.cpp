// example: ex22_moved_from_unique_ptr
// purpose: Show that the move constructor of std::unique_ptr leaves the source null.
// expect: ok
#include <iostream>
#include <memory>
#include <utility>
int main() {
    auto first = std::make_unique<int>(42);
    auto second = std::move(first);
    std::cout << std::boolalpha << (first == nullptr) << ' ' << *second << '\n';
}
