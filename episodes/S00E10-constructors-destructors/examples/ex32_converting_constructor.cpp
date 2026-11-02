// example: ex32_converting_constructor
// purpose: Show that a constructor with one argument lets the compiler convert an int to an Account in silence.
// expect: ok
#include <iostream>
class Account {
    int balance_;
public:
    Account(int start) : balance_{start} {}
    int balance() const { return balance_; }
};
void show(Account account) {
    std::cout << account.balance() << '\n';
}
int main() {
    show(50);
    Account a = 70;
    show(a);
}
