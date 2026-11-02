// example: ex07_throw_catch_basic
// purpose: Throw a std::runtime_error in a function, catch it in main and print the message from what().
// expect: ok
// in-video: yes
#include <iostream>
#include <stdexcept>
int withdraw(int balance, int cost) {
    if (cost > balance) throw std::runtime_error{"no money"};
    return balance - cost;
}
int main() {
    try {
        std::cout << withdraw(100, 30) << '\n';
        std::cout << withdraw(100, 500) << '\n';
    } catch (const std::runtime_error& e) {
        std::cout << "error: " << e.what() << '\n';
    }
}
