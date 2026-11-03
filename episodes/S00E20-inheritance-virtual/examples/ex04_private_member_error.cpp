// example: ex04_private_member_error
// purpose: Show that a derived class cannot read a private member of its base class.
// expect: compile-error
// expect-match: private
// in-video: no
class Account {
private:
    int balance_ = 100;
};
class Savings : public Account {
public:
    int balance() const { return balance_; }
};
int main() {
    Savings savings;
    return savings.balance();
}
