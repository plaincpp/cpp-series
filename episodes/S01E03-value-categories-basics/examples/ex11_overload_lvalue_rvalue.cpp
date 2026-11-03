// example: ex11_overload_lvalue_rvalue
// purpose: Use an int& and an int&& overload to show the value category of six expressions.
// expect: ok
// in-video: yes
#include <iostream>
void kind(int&)  { std::cout << "lvalue\n"; }
void kind(int&&) { std::cout << "rvalue\n"; }
int main() {
    int count = 5;
    int* p = &count;
    kind(count);
    kind(*p);
    kind(++count);
    kind(42);
    kind(count + 1);
    kind(count++);
}
