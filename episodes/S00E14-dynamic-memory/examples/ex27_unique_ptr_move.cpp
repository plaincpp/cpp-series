// example: ex27_unique_ptr_move
// purpose: Use std::move to give the object to a second std::unique_ptr, and show that the first one becomes empty.
// expect: ok
#include <iostream>
#include <memory>
#include <utility>
int main() {
    auto first = std::make_unique<int>(90);
    auto second = std::move(first);
    std::cout << (first == nullptr) << ' ' << *second << '\n';
}
