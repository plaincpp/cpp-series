// example: ex18_different_instantiation_error
// purpose: Show that a Stack of int cannot initialize a Stack of double, because the two types are not related.
// expect: compile-error
// expect-match: 'Stack<int>' to
// in-video: no
#include <vector>
template <typename T>
class Stack {
    std::vector<T> items;
public:
    void push(const T& value) { items.push_back(value); }
};
int main() {
    Stack<int> whole;
    whole.push(3);
    Stack<double> prices = whole;
    prices.push(2.5);
}
