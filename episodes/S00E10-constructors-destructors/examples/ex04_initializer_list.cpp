// example: ex04_initializer_list
// purpose: Use the member initializer list to give each member its start value.
// expect: ok
// in-video: yes
#include <iostream>
class Clock {
    int hour_;
    int minute_;
public:
    Clock(int hour, int minute)
        : hour_{hour}, minute_{minute} {}
    int minutes() const { return hour_ * 60 + minute_; }
};
int main() {
    Clock start{9, 30};
    std::cout << start.minutes() << '\n';
}
