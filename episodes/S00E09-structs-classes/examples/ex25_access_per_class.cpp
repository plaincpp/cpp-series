// example: ex25_access_per_class
// purpose: Show that a member function can read the private data of another object of the same class.
// expect: ok
#include <iostream>

class Account {
public:
    void deposit(int amount) { if (amount > 0) balance_ += amount; }
    bool richer_than(const Account& other) const {
        return balance_ > other.balance_;
    }
private:
    int balance_ = 0;
};

int main() {
    Account a;
    Account b;
    a.deposit(300);
    b.deposit(200);
    std::cout << std::boolalpha;
    std::cout << a.richer_than(b) << ' ' << b.richer_than(a) << '\n';
}
