// example: ex08_default_member_init_vs_list
// purpose: Show that the list value replaces the default member initializer, and an omitted member keeps its default.
// expect: ok
#include <iostream>
class Clock {
    int hour_ = 12;
    int minute_ = 0;
public:
    Clock() {}
    Clock(int hour) : hour_{hour} {}
    int minutes() const { return hour_ * 60 + minute_; }
};
int main() {
    Clock noon;
    Clock nine{9};
    std::cout << noon.minutes() << ' ' << nine.minutes() << '\n';
}
