// example: ex04_operator_call_forms
// purpose: Show that a + b is a call of a.operator+(b) for a member, or operator+(a, b) for a free function.
// expect: ok
// in-video: no
#include <iostream>
struct Vector2 {
    int x, y;
    Vector2 operator+(const Vector2& other) const {
        return {x + other.x, y + other.y};
    }
};
struct Money {
    int cents;
};
Money operator+(Money a, Money b) {
    return {a.cents + b.cents};
}
int main() {
    Vector2 a{1, 2};
    Vector2 b{3, 4};
    Vector2 sum1 = a + b;
    Vector2 sum2 = a.operator+(b);
    std::cout << sum1.x << ' ' << sum2.x << '\n';
    Money m1 = Money{150} + Money{25};
    Money m2 = operator+(Money{150}, Money{25});
    std::cout << m1.cents << ' ' << m2.cents << '\n';
}
