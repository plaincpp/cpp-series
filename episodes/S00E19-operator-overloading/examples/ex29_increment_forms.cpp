// example: ex29_increment_forms
// purpose: Write prefix ++ that returns a reference and postfix ++ that takes an int and returns the old value.
// expect: ok
// in-video: no
#include <iostream>
struct Counter {
    int value = 0;
    Counter& operator++() {
        ++value;
        return *this;
    }
    Counter operator++(int) {
        Counter old = *this;
        ++*this;
        return old;
    }
};
int main() {
    Counter c;
    Counter a = c++;
    Counter b = ++c;
    std::cout << a.value << ' ' << b.value << ' ' << c.value << '\n';
}
