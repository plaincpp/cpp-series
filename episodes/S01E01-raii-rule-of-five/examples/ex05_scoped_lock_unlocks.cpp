// example: ex05_scoped_lock_unlocks
// purpose: Show that std::scoped_lock unlocks the mutex when an exception leaves the function.
// expect: ok
#include <iostream>
#include <mutex>
#include <stdexcept>
std::mutex m;
int balance = 100;
void withdraw(int amount) {
    std::scoped_lock lock{m};
    if (amount > balance) throw std::runtime_error{"no funds"};
    balance -= amount;
}
int main() {
    try { withdraw(500); } catch (const std::exception& e) {
        std::cout << "caught: " << e.what() << '\n';
    }
    withdraw(30);
    std::cout << "balance: " << balance << '\n';
}
