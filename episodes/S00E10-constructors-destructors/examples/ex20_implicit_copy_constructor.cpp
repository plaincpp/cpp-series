// example: ex20_implicit_copy_constructor
// purpose: Show that the compiler writes a copy constructor that copies each member, so the copy is independent.
// expect: ok
// in-video: yes
#include <iostream>
class Counter {
    int count_ = 0;
public:
    Counter(int start) : count_{start} {}
    void add() { ++count_; }
    int count() const { return count_; }
};
int main() {
    Counter a{5};
    Counter b{a};
    b.add();
    std::cout << a.count() << ' ' << b.count() << '\n';
}
