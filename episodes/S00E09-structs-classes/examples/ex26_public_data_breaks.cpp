// example: ex26_public_data_breaks
// purpose: Show that public data lets any code break a rule, here a balance that must not go below zero.
// expect: ok
// in-video: yes
#include <iostream>

struct Account {
    int balance = 100;
};

int main() {
    Account a;
    a.balance -= 500;
    std::cout << a.balance << '\n';
}
