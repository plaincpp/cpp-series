// example: ex14_implicit_this_werror
// purpose: Show that [=] in a member function captures the this pointer, and that C++20 deprecates it.
// expect: compile-error
// expect-match: implicit capture of 'this'
// flags: -Werror
#include <iostream>

class Counter {
public:
    int value = 0;
    auto reader() {
        return [=]() { return value; };
    }
};

int main() {
    Counter counter;
    auto read = counter.reader();
    counter.value = 5;
    std::cout << read() << '\n';
}
