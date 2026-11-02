// example: ex19_return_by_value_fix
// purpose: Return a local result by value, so the caller gets its own copy.
// expect: ok
// stdin: 21
// in-video: yes
#include <iostream>
int twice(int value) {
    int result = value * 2;
    return result;
}
int main() {
    int number = 0;
    std::cin >> number;
    std::cout << twice(number) << '\n';
}
