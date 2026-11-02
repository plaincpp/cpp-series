// example: ex33_explicit_constructor_error
// purpose: Use explicit to stop the silent conversion from int to Account.
// expect: compile-error
// expect-match: 'Account'
class Account {
    int balance_;
public:
    explicit Account(int start) : balance_{start} {}
    int balance() const { return balance_; }
};
int show(Account account) {
    return account.balance();
}
int main() {
    return show(50);
}
