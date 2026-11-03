// example: ex03_base_constructor_args
// purpose: Call a base constructor with an argument from the member initializer list of the derived class.
// expect: ok
// in-video: no
#include <iostream>
#include <string>
#include <utility>
class Shape {
public:
    explicit Shape(std::string name) : name_{std::move(name)} {}
    const std::string& name() const { return name_; }
private:
    std::string name_;
};
class Square : public Shape {
public:
    explicit Square(int side) : Shape{"square"}, side_{side} {}
    int area() const { return side_ * side_; }
private:
    int side_;
};
int main() {
    Square square{4};
    std::cout << square.name() << ' ' << square.area() << '\n';
}
