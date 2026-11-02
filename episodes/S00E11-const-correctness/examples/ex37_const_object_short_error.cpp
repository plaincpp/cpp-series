// example: ex37_const_object_short_error
// purpose: Show that a const object cannot call a member function without const.
// expect: compile-error
// expect-match: const Box
// in-video: no
#include <iostream>
struct Box {
    int size = 3;
    int get() { return size; }
};
int main() {
    const Box box;
    std::cout << box.get() << '\n';
}
