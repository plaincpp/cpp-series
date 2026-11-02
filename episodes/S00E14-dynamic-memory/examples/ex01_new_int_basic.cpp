// example: ex01_new_int_basic
// purpose: Use new to make one int on the heap, change it through the pointer, and free it with delete.
// expect: ok
// in-video: yes
#include <iostream>
int main() {
    int* count = new int{41};
    *count += 1;
    std::cout << *count << '\n';
    delete count;
}
