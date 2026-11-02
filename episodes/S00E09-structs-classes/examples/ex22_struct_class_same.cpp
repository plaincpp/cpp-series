// example: ex22_struct_class_same
// purpose: Show that a struct with private data and a class with the same members work the same.
// expect: ok
#include <iostream>

struct Wallet {
private:
    int cents_ = 250;
public:
    int cents() const { return cents_; }
};

class Purse {
    int cents_ = 250;
public:
    int cents() const { return cents_; }
};

int main() {
    Wallet w;
    Purse p;
    std::cout << w.cents() << ' ' << p.cents() << '\n';
    std::cout << std::boolalpha << (sizeof(Wallet) == sizeof(Purse)) << '\n';
}
