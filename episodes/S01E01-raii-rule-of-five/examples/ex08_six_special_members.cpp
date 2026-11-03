// example: ex08_six_special_members
// purpose: Show which expression calls each of the six special member functions.
// expect: ok
#include <iostream>
#include <utility>
struct Probe {
    Probe() { std::cout << "default constructor\n"; }
    ~Probe() { std::cout << "destructor\n"; }
    Probe(const Probe&) { std::cout << "copy constructor\n"; }
    Probe& operator=(const Probe&) {
        std::cout << "copy assignment\n";
        return *this;
    }
    Probe(Probe&&) noexcept { std::cout << "move constructor\n"; }
    Probe& operator=(Probe&&) noexcept {
        std::cout << "move assignment\n";
        return *this;
    }
};
int main() {
    Probe a;
    Probe b = a;
    Probe c = std::move(a);
    b = c;
    c = std::move(b);
    std::cout << "end of main\n";
}
