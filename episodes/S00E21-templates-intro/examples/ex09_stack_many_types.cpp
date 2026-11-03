// example: ex09_stack_many_types
// purpose: Use one Stack class template with int and std::string elements.
// expect: ok
// in-video: no
#include <cstddef>
#include <iostream>
#include <string>
#include <vector>
template <typename T>
class Stack {
    std::vector<T> items;
public:
    void push(const T& value) { items.push_back(value); }
    void pop() { items.pop_back(); }
    const T& top() const { return items.back(); }
    bool empty() const { return items.empty(); }
    std::size_t size() const { return items.size(); }
};
int main() {
    Stack<int> numbers;
    numbers.push(1);
    numbers.push(2);
    numbers.push(3);
    numbers.pop();
    std::cout << numbers.top() << ' ' << numbers.size() << '\n';
    Stack<std::string> words;
    words.push("first");
    words.push("second");
    while (!words.empty()) {
        std::cout << words.top() << '\n';
        words.pop();
    }
}
