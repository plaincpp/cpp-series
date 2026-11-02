// example: ex20_class_private_error
// purpose: Show that the members of a class are private by default, so main cannot change them.
// expect: compile-error
// expect-match: private
// in-video: yes
class Account {
    int balance = 100;
};
int main() {
    Account a;
    a.balance = -500;
}
