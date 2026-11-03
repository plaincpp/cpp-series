// example: ex16_assert_runtime_check
// purpose: Show that a failed assert stops a Debug build with the file, the line and the condition.
// expect: runtime-error
// expect-match: Assertion `count > 0' failed
// stdin: 0
#include <cassert>
#include <iostream>

int main() {
    int count = 0;
    std::cin >> count;
    assert(count > 0);
    std::cout << "count: " << count << '\n';
}
