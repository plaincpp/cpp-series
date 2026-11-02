// example: ex36_reference_member
// purpose: Use the member initializer list to bind a reference member, which the body cannot do.
// expect: ok
#include <iostream>
class TicketDesk {
    int& sold_;
public:
    TicketDesk(int& sold) : sold_{sold} {}
    void sell() { ++sold_; }
};
int main() {
    int sold = 0;
    TicketDesk desk{sold};
    desk.sell();
    desk.sell();
    std::cout << sold << '\n';
}
