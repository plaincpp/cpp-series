// example: ex30_assert_invariant
// purpose: Use assert in a private check function to stop the program when a member function breaks the invariant.
// expect: runtime-error
// expect-match: Assertion
#include <cassert>
#include <iostream>

class Account {
public:
    void withdraw(int amount) {
        balance_ -= amount;
        check();
    }
    int balance() const { return balance_; }
private:
    void check() const { assert(balance_ >= 0); }
    int balance_ = 100;
};

int main() {
    Account a;
    a.withdraw(30);
    std::cout << a.balance() << '\n';
    a.withdraw(500);
    std::cout << a.balance() << '\n';
}
