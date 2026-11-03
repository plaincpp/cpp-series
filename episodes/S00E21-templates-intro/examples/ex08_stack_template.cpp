// example: ex08_stack_template
// purpose: Write a small Stack class template and make a Stack of int.
// expect: ok
// in-video: yes
#include <iostream>
#include <vector>
template <typename T>
class Stack {
    std::vector<T> items;
public:
    void push(const T& value) { items.push_back(value); }
    const T& top() const { return items.back(); }
};
int main() {
    Stack<int> numbers;
    numbers.push(20);
    std::cout << numbers.top() << '\n';
}
