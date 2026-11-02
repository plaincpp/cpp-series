// example: ex02_constructor_invariant
// purpose: Use a constructor that corrects a bad start value, so the invariant is true from the start.
// expect: ok
// in-video: yes
#include <iostream>
class Account {
    int balance_;
public:
    Account(int start) {
        if (start < 0) start = 0;
        balance_ = start;
    }
    int balance() const { return balance_; }
};
int main() {
    Account b{-50};
    std::cout << b.balance() << '\n';
}
