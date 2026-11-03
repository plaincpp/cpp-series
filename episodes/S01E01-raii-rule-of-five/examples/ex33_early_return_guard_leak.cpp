// example: ex33_early_return_guard_leak
// purpose: Show that an early return releases the RAII guard, but skips the delete[] of a raw array.
// expect: sanitizer
// expect-match: detected memory leaks
// in-video: no
#include <iostream>
struct Guard {
    Guard() { std::cout << "acquire\n"; }
    ~Guard() { std::cout << "release\n"; }
};
void work(int mode) {
    Guard guard;
    int* data = new int[4]{};
    if (mode == 1) return;
    delete[] data;
}
int main() { work(1); }
