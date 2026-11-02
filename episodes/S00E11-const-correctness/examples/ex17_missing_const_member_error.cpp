// example: ex17_missing_const_member_error
// purpose: Show that a const reference cannot call a member function without const.
// expect: compile-error
// expect-match: const Account
// in-video: yes
#include <iostream>
class Account {
    int balance_ = 100;
public:
    int balance() { return balance_; }
    void deposit(int amount) { balance_ += amount; }
};
void print(const Account& account) {
    std::cout << account.balance() << '\n';
}
int main() {
    Account account;
    print(account);
}
