// example: ex19_const_object_call_error
// purpose: Show that a const object can call const member functions only.
// expect: compile-error
// expect-match: const Account
// in-video: yes
#include <iostream>
class Account {
    int balance_ = 100;
public:
    int balance() const { return balance_; }
    void deposit(int amount) { balance_ += amount; }
};
int main() {
    const Account account;
    std::cout << account.balance() << '\n';
    account.deposit(50);
}
