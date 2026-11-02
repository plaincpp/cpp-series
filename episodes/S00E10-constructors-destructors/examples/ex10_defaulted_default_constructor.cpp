// example: ex10_defaulted_default_constructor
// purpose: Use = default to get the default constructor back next to a constructor with arguments.
// expect: ok
// in-video: yes
#include <iostream>
class Clock {
    int hour_ = 0;
    int minute_ = 0;
public:
    Clock() = default;
    Clock(int hour, int minute)
        : hour_{hour}, minute_{minute} {}
    int minutes() const { return hour_ * 60 + minute_; }
};
int main() {
    Clock midnight;
    std::cout << midnight.minutes() << '\n';
}
