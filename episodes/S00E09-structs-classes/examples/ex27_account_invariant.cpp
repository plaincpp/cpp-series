// example: ex27_account_invariant
// purpose: Use private data and a public function that checks each change, so the balance never goes below zero.
// expect: ok
// in-video: yes
#include <iostream>
class Account {
    int balance_ = 0;
public:
    void deposit(int amount) { if (amount > 0) balance_ += amount; }
    int balance() const { return balance_; }
};

int main() {
    Account a;
    a.deposit(50);
    a.deposit(-500);
    std::cout << a.balance() << '\n';
}
