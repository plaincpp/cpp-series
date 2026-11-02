// example: ex23_private_brace_init_error
// purpose: Show that braces cannot set private members, so a class needs a constructor for a start value.
// expect: compile-error
// expect-match: no matching
// in-video: yes
class Account {
    int balance_ = 0;
public:
    int balance() const { return balance_; }
};
int main() {
    Account a{100};
    return a.balance();
}
