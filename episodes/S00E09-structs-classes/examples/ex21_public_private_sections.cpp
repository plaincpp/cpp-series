// example: ex21_public_private_sections
// purpose: Use a public section for the functions and a private section for the data.
// expect: ok
// in-video: yes
#include <iostream>

class Counter {
public:
    void add() { count_ += 1; }
    int value() const { return count_; }
private:
    int count_ = 0;
};
int main() {
    Counter clicks;
    clicks.add();
    std::cout << clicks.value() << '\n';
}
