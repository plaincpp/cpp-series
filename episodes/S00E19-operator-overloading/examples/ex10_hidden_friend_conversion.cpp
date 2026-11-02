// example: ex10_hidden_friend_conversion
// purpose: Use a friend operator+ inside the class, so that an int converts on the left and on the right.
// expect: ok
// in-video: no
#include <iostream>
class Money {
    int cents_;
public:
    Money(int cents) : cents_{cents} {}
    int cents() const { return cents_; }
    friend Money operator+(Money a, Money b) {
        return Money{a.cents_ + b.cents_};
    }
};
int main() {
    Money price{250};
    Money a = price + 50;
    Money b = 50 + price;
    std::cout << a.cents() << ' ' << b.cents() << '\n';
}
