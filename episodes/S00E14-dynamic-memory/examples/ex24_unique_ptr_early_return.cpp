// example: ex24_unique_ptr_early_return
// purpose: Use std::unique_ptr in the function of ex15, so that each return frees the buffer.
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
