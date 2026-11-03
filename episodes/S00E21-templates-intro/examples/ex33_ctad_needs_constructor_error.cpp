// example: ex33_ctad_needs_constructor_error
// purpose: Show that Stack numbers{10} does not compile: no constructor of Stack takes a T, so CTAD cannot find T.
// expect: compile-error
// expect-match: Stack
// in-video: no
#include <vector>
template <typename T>
class Stack {
    std::vector<T> items;
public:
    void push(const T& value) { items.push_back(value); }
};
int main() {
    Stack numbers{10};
    numbers.push(20);
}
