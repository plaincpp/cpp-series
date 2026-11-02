// example: ex07_large_local_array_ub
// purpose: Show that a very large local array does not fit on the stack, and AddressSanitizer reports it.
// in-video: yes
// expect: ub
// expect-match: stack-overflow
// stdin: 4000000
#include <iostream>

int main() {
    int count = 0;
    std::cin >> count;
    int readings[4'000'000];
    for (int i = 0; i < count; ++i) {
        readings[i] = i;
    }
    std::cout << readings[count - 1] << '\n';
}
