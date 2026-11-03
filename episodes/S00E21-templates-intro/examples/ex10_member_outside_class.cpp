// example: ex10_member_outside_class
// purpose: Define the member functions of a class template outside the class body.
// expect: ok
// in-video: no
#include <iostream>
#include <vector>
template <typename T>
class Stack {
    std::vector<T> items;
public:
    void push(const T& value);
    const T& top() const;
};
template <typename T>
void Stack<T>::push(const T& value) {
    items.push_back(value);
}
template <typename T>
const T& Stack<T>::top() const {
    return items.back();
}
int main() {
    Stack<double> prices;
    prices.push(9.5);
    std::cout << prices.top() << '\n';
}
