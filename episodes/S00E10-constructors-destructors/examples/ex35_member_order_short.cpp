// example: ex35_member_order_short
// purpose: Show in a few short lines that members initialize in declaration order, not in list order.
// expect: ok
// in-video: yes
#include <iostream>
int say(int v) {
    std::cout << v << '\n';
    return v;
}
struct Pair {
    int one, two;
    Pair() : two{say(2)}, one{say(1)} {}
};
int main() { Pair p; }
