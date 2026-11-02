// example: ex31_auto_pitfall
// purpose: Show that auto with the literal 0 gives int, so the variable cannot hold 2.5.
// expect: ok
// in-video: yes
#include <iostream>

int main() {
    auto count = 0;
    count += 2.5;
    auto total = 0.0;
    total += 2.5;
    std::cout << count << ' ' << total << '\n';
}
