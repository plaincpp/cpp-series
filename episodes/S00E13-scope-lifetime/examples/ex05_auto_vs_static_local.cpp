// example: ex05_auto_vs_static_local
// purpose: Compare an automatic local variable and a static local variable with the same block scope.
// expect: ok
// in-video: yes
#include <iostream>
int count_auto() {
    int calls = 0;
    return ++calls;
}
int count_static() {
    static int calls = 0;
    return ++calls;
}
int main() {
    std::cout << count_auto() << ' ' << count_auto() << '\n';
    std::cout << count_static() << ' ' << count_static() << '\n';
}
