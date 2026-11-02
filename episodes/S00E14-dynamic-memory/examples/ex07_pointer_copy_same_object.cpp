// example: ex07_pointer_copy_same_object
// purpose: Show that each new makes a different object, and a copy of a pointer points to the same object.
// expect: ok
#include <iostream>
int main() {
    int* first = new int{1};
    int* second = new int{1};
    int* alias = first;
    *alias = 5;
    std::cout << *first << ' ' << *second << '\n';
    std::cout << (alias == first) << ' ' << (second == first) << '\n';
    delete second;
    delete first;
}
