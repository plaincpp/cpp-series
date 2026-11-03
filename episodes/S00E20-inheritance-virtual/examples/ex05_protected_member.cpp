// example: ex05_protected_member
// purpose: Show that a derived class can use a protected member, but other code cannot.
// expect: ok
// in-video: no
#include <iostream>
class Account {
protected:
    int balance_ = 100;
};
class Savings : public Account {
public:
    void add_interest() { balance_ += balance_ / 10; }
    int balance() const { return balance_; }
};
int main() {
    Savings savings;
    savings.add_interest();
    std::cout << savings.balance() << '\n';
}
