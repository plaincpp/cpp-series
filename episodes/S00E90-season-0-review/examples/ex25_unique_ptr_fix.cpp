// example: ex25_unique_ptr_fix
// purpose: Use std::unique_ptr, so the memory is released on every return path.
// expect: ok
// in-video: yes
#include <iostream>
#include <memory>
bool save(int value) {
    auto buffer = std::make_unique<int[]>(4);
    if (value < 0) return false;
    buffer[0] = value;
    return true;
}
int main() {
    std::cout << save(5) << '\n';
    std::cout << save(-1) << '\n';
}
