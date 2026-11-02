// example: ex11_init_capture
// purpose: Use init-captures to give a capture a new name and a value from an expression.
// expect: ok
#include <iostream>
#include <string>

int main() {
    int price = 20;
    int count = 3;
    std::string name = "Ada";
    auto summary = [total = price * count, label = name + "!"]() {
        return label + " " + std::to_string(total);
    };
    auto add_one = [&ref = count]() { ++ref; };
    price = 0;
    add_one();
    std::cout << summary() << '\n';
    std::cout << count << '\n';
}
