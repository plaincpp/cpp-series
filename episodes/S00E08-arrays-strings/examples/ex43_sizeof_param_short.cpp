// example: ex43_sizeof_param_short
// purpose: Show in a short program that sizeof on an array parameter gives the pointer size.
// expect: ok
// in-video: yes
#include <iostream>
void show(int values[5]) {
    std::cout << sizeof(values) << '\n';
}
int main() {
    int scores[5]{};
    std::cout << sizeof(scores) << '\n';
    show(scores);
}
