// example: ex24_reference_member_dangling_ub
// purpose: Show that a reference member bound to a temporary in a constructor dangles after the statement.
// expect: ub
// expect-match: heap-use-after-free
// stdin: Ada
#include <iostream>
#include <string>

class Greeter {
public:
    explicit Greeter(const std::string& name) : name_(name) {}
    void greet() const { std::cout << "Hello, " << name_ << '\n'; }

private:
    const std::string& name_;
};

int main() {
    std::string first;
    std::cin >> first;
    Greeter greeter(first + " Lovelace, Countess of Lovelace");
    greeter.greet();
}
