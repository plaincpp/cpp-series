// example: ex36_money_realistic
// purpose: Use a Money class with friend operators +, +=, <=>, == and << to sort and total prices.
// expect: ok
// in-video: no
#include <algorithm>
#include <compare>
#include <iostream>
#include <vector>
class Money {
    long long cents_ = 0;
public:
    Money() = default;
    explicit Money(long long cents) : cents_{cents} {}
    Money& operator+=(Money other) {
        cents_ += other.cents_;
        return *this;
    }
    friend Money operator+(Money a, Money b) { return a += b; }
    friend auto operator<=>(const Money&, const Money&) = default;
    friend std::ostream& operator<<(std::ostream& out, const Money& m) {
        out << '$' << m.cents_ / 100 << '.';
        long long rest = m.cents_ % 100;
        return out << (rest < 10 ? "0" : "") << rest;
    }
};
int main() {
    std::vector<Money> prices{Money{1999}, Money{250}, Money{1005}};
    std::sort(prices.begin(), prices.end());
    Money total;
    for (const Money& p : prices) {
        std::cout << p << '\n';
        total += p;
    }
    std::cout << "total " << total << '\n';
    std::cout << std::boolalpha << (total == Money{250} + Money{3004}) << '\n';
}
