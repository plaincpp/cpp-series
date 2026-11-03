// example: ex07_watch_balance
// purpose: Use a watchpoint to find each line that changes a variable.
// expect: ok
// flags: -g -O0
#include <iostream>

struct Account {
    int balance = 100;
};

void apply_fee(Account& account, int fee) {
    account.balance -= fee;
}

int main() {
    Account account;
    apply_fee(account, 5);
    apply_fee(account, 5);
    account.balance += 20;
    std::cout << "balance: " << account.balance << '\n';
}
