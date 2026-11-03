// example: ex10_user_ctor_no_default_error
// purpose: Show that a user-declared constructor stops the implicit default constructor.
// expect: compile-error
// expect-match: no matching
#include <string>
class Account {
    std::string owner_;
public:
    explicit Account(std::string owner) : owner_{owner} {}
};
int main() {
    Account account;
}
