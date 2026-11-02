// example: ex04_new_init_forms
// purpose: Use braces and parentheses to give a heap object its first value.
// expect: ok
#include <iostream>
#include <string>
int main() {
    int* zero = new int{};
    int* five = new int(5);
    int* seven = new int{7};
    std::string* text = new std::string(3, 'a');
    std::cout << *zero << ' ' << *five << ' ' << *seven << ' ' << *text << '\n';
    delete text;
    delete seven;
    delete five;
    delete zero;
}
