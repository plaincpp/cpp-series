// example: ex04_division_identity
// purpose: Prove that (a / b) * b + a % b equals a for all sign combinations.
// expect: ok
#include <iostream>

int main() {
    int values[] = {7, -7};
    int divisors[] = {2, -2, 3, -3};
    std::cout << std::boolalpha;
    for (int a : values) {
        for (int b : divisors) {
            bool same = (a / b) * b + a % b == a;
            std::cout << a << ' ' << b << ' ' << a / b << ' ' << a % b << ' ' << same << '\n';
        }
    }
}
