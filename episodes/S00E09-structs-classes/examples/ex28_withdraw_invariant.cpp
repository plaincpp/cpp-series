// example: ex28_withdraw_invariant
// purpose: Use deposit and withdraw functions that refuse a change that breaks the invariant, and return false.
// expect: ok
#include <iostream>

class Account {
public:
    bool deposit(int amount) {
        if (amount <= 0) return false;
        balance_ += amount;
        return true;
    }
    bool withdraw(int amount) {
        if (amount <= 0 || amount > balance_) return false;
        balance_ -= amount;
        return true;
    }
    int balance() const { return balance_; }
private:
    int balance_ = 0;
};

int main() {
    Account a;
    std::cout << std::boolalpha;
    std::cout << a.deposit(100) << '\n';
    std::cout << a.withdraw(30) << '\n';
    std::cout << a.withdraw(500) << '\n';
    std::cout << a.balance() << '\n';
}
