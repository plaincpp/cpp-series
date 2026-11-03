// example: ex02_shallow_copy_ub
// purpose: Show that the implicit copy constructor copies the pointer, so two destructors delete one block.
// expect: ub
// expect-match: double-free
#include <iostream>
struct Box {
    int* value;
    explicit Box(int v) : value{new int{v}} {}
    ~Box() { delete value; }
};
int main() {
    Box a{7};
    Box b = a;
    std::cout << (a.value == b.value) << '\n';
}
