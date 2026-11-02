// example: ex18_const_member_function
// purpose: Show that a const member function can be called through a const reference.
// expect: ok
// in-video: yes
#include <iostream>
class Account {
    int balance_ = 100;
public:
    int balance() const { return balance_; }
    void deposit(int amount) { balance_ += amount; }
};
void print(const Account& account) {
    std::cout << account.balance() << '\n';
}
int main() {
    Account account;
    print(account);
}
