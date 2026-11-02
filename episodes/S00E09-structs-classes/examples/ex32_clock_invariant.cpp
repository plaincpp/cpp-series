// example: ex32_clock_invariant
// purpose: Use a class that keeps the hour in 0-23 and the minute in 0-59 after every change.
// expect: ok
#include <iostream>

class Clock {
public:
    void add_minutes(int count) {
        int total = hour_ * 60 + minute_ + count;
        total = (total % 1440 + 1440) % 1440;
        hour_ = total / 60;
        minute_ = total % 60;
    }
    void print() const {
        std::cout << hour_ << ':' << (minute_ < 10 ? "0" : "") << minute_ << '\n';
    }
private:
    int hour_ = 0;
    int minute_ = 0;
};

int main() {
    Clock c;
    c.add_minutes(90);
    c.print();
    c.add_minutes(23 * 60);
    c.print();
    c.add_minutes(-100);
    c.print();
}
