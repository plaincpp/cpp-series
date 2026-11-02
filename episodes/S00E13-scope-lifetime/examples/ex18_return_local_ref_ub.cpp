// example: ex18_return_local_ref_ub
// purpose: Show that a returned reference to a local variable refers to an object that no longer exists.
// expect: ub
// expect-match: stack-use-after-return
// stdin: 21
// compilers: clang
// in-video: yes
#include <iostream>
const int& twice(int value) {
    int result = value * 2;
    return result;
}
int main() {
    int number = 0;
    std::cin >> number;
    std::cout << twice(number) << '\n';
}
