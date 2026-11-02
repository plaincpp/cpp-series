// example: ex29_ref_ptr_same_code
// purpose: Show a reference parameter and a pointer parameter that do the same work.
// expect: ok
#include <iostream>

void add_one_ref(int& value) {
    value = value + 1;
}

void add_one_ptr(int* value) {
    *value = *value + 1;
}

int main() {
    int count = 0;
    add_one_ref(count);
    add_one_ptr(&count);
    std::cout << count << '\n';
}
