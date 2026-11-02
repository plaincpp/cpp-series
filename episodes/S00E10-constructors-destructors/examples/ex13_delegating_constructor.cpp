// example: ex13_delegating_constructor
// purpose: Use a delegating constructor so that one constructor calls another and the checks are in one place.
// expect: ok
#include <iostream>
class Clock {
    int hour_;
    int minute_;
public:
    Clock(int hour, int minute) : hour_{hour % 24}, minute_{minute % 60} {
        std::cout << "main constructor\n";
    }
    Clock() : Clock{12, 0} {
        std::cout << "delegating body\n";
    }
    int minutes() const { return hour_ * 60 + minute_; }
};
int main() {
    Clock noon;
    std::cout << noon.minutes() << '\n';
}
