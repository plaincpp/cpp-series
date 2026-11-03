// example: ex13_assert_failure
// purpose: Show a failed assert and the frames of abort above your function in the backtrace.
// expect: runtime-error
// expect-match: Assertion `whole != 0' failed
// flags: -g -O0
// stdin: 3 0
#include <cassert>
#include <iostream>

int percent(int part, int whole) {
    assert(whole != 0);
    return part * 100 / whole;
}

int main() {
    int part = 0;
    int whole = 0;
    std::cin >> part >> whole;
    std::cout << percent(part, whole) << "%\n";
}
