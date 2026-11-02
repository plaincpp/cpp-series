// example: ex36_unique_ptr_fix_short
// purpose: Show the std::unique_ptr fix of ex35 in a few short lines, for a vertical Short.
// expect: ok
// in-video: yes
#include <memory>
bool save(int value) {
    auto buffer = std::make_unique<int[]>(4);
    if (value < 0) return false;
    buffer[0] = value;
    return true;
}
int main() {
    save(-1);
}
