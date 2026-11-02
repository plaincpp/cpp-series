// example: ex30_value_reference_short
// purpose: Show in a Short that a capture by value keeps the old value and a reference sees the new value.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int n = 1;
    auto val = [n] { return n; };
    auto ref = [&n] { return n; };
    n = 5;
    std::cout << val() << ' ';
    std::cout << ref() << '\n';
}
