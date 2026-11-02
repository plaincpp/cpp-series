// example: ex29_reference_getter_pitfall
// purpose: Show that a getter that returns a non-const reference lets any code change private data.
// expect: ok
// in-video: yes
#include <iostream>
class Account {
    int balance_ = 0;
public:
    void deposit(int amount) { if (amount > 0) balance_ += amount; }
    int& balance() { return balance_; }
};

int main() {
    Account a;
    a.deposit(50);
    a.balance() = -500;
    std::cout << a.balance() << '\n';
}
