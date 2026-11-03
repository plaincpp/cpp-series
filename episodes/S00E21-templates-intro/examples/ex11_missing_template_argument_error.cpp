// example: ex11_missing_template_argument_error
// purpose: Show that Stack without a template argument does not compile, because the compiler cannot find T.
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
    Stack numbers;
    numbers.push(10);
}
