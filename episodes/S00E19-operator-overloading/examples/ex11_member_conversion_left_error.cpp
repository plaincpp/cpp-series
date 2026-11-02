// example: ex11_member_conversion_left_error
// purpose: Show that a member operator+ converts an int only on the right, so 50 + price does not compile.
// expect: compile-error
// expect-match: 'int' and 'Money'
// in-video: no
#include <iostream>
class Money {
    int cents_;
public:
    Money(int cents) : cents_{cents} {}
    int cents() const { return cents_; }
    Money operator+(Money other) const {
        return Money{cents_ + other.cents_};
    }
};
int main() {
    Money price{250};
    Money a = price + 50;
    Money b = 50 + price;
    std::cout << a.cents() << ' ' << b.cents() << '\n';
}
