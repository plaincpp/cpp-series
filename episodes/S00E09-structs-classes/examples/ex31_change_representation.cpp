// example: ex31_change_representation
// purpose: Show that a class can keep a price as one number of cents, and the callers see only dollars and cents.
// expect: ok
#include <iostream>

class Price {
public:
    void set(int dollars, int cents) { total_cents_ = dollars * 100 + cents; }
    int dollars() const { return total_cents_ / 100; }
    int cents() const { return total_cents_ % 100; }
private:
    int total_cents_ = 0;
};

int main() {
    Price p;
    p.set(4, 99);
    std::cout << p.dollars() << " dollars " << p.cents() << " cents\n";
}
