// example: ex13_capture_this
// purpose: Compare [this], which reads the current members, and [*this], which copies the object.
// expect: ok
#include <iostream>

class Counter {
public:
    void add(int amount) { value_ += amount; }
    auto reader() {
        return [this]() { return value_; };
    }
    auto snapshot() {
        return [*this]() { return value_; };
    }

private:
    int value_ = 0;
};

int main() {
    Counter counter;
    counter.add(5);
    auto read_now = counter.reader();
    auto read_copy = counter.snapshot();
    counter.add(10);
    std::cout << read_now() << '\n';
    std::cout << read_copy() << '\n';
}
