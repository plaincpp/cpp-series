// example: ex28_const_member_no_assign_error
// purpose: Show that the compiler deletes the copy assignment of a class with a const member.
// expect: compile-error
// expect-match: implicitly deleted
// in-video: no
struct Account {
    const int id;
    int balance;
};
int main() {
    Account a{1, 50};
    Account b{2, 70};
    Account c = b;
    a = b;
    return a.balance + c.balance;
}
