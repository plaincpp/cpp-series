// example: ex03_no_default_constructor_error
// purpose: Show that a class with a constructor that takes an argument has no default constructor.
// expect: compile-error
// expect-match: no matching
// in-video: yes
class Account {
    int balance_;
public:
    Account(int start) { balance_ = start; }
    int balance() const { return balance_; }
};
int main() {
    Account a;
    return a.balance();
}
