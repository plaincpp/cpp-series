// example: ex11_deleted_default_constructor_error
// purpose: Show that the compiler cannot write a default constructor when a member has no default constructor.
// expect: compile-error
// expect-match: deleted
class Account {
    int balance_;
public:
    Account(int start) : balance_{start} {}
    int balance() const { return balance_; }
};
struct Customer {
    Account account;
};
int main() {
    Customer c;
    return c.account.balance();
}
