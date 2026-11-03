// example: ex32_empty_stack_top_ub
// purpose: Show that a template adds no checks: top on an empty Stack is undefined behavior.
// expect: ub
// expect-match: applying non-zero offset
// stdin: 0
// in-video: no
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
    int count = 0;
    std::cin >> count;
    for (int i = 1; i <= count; ++i) {
        numbers.push(i);
    }
    std::cout << numbers.top() << '\n';
}
