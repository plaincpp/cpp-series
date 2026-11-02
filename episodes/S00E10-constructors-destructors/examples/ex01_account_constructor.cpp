// example: ex01_account_constructor
// purpose: Show that a constructor has the class name, no return type, and runs when the object is made.
// expect: ok
// in-video: yes
#include <iostream>
class Account {
    int balance_;
public:
    Account(int start) {
        balance_ = start;
        std::cout << "constructor runs\n";
    }
    int balance() const { return balance_; }
};
int main() {
    Account a{100};
    std::cout << a.balance() << '\n';
}
