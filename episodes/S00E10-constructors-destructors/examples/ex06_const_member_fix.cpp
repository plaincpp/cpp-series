// example: ex06_const_member_fix
// purpose: Use the member initializer list to initialize a const member.
// expect: ok
// in-video: yes
#include <iostream>
class Ticket {
    const int id_;
public:
    Ticket(int id) : id_{id} {}
    int id() const { return id_; }
};
int main() {
    Ticket t{7};
    std::cout << t.id() << '\n';
}
